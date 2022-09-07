#include <stdio.h>
int top=-1, n, i, TOP=-1;
char input[100], stack[100], ans[100];
int Prec(char ch) 
{ 
    switch (ch) 
    { 
    case '+': 
    case '-': 
        return 1; 

    case '*': 
    case '/': 
        return 2; 

    case '^': 
        return 3; 
    } 
    return -1; 
} 

int checkoprand(char ch){
        if(ch>='a' && ch<='z'){
            return 1;
        }
        if(ch>='A' && ch<='Z'){
            return 1;
        }
        else{
            return 0;
        }
    }

int main() {
    gets(input);
    while(input[n]!=0){
        n++;
    }
    for(int i =0; i<n; i++){
        if(checkoprand(input[i])==1){
            top++;
            ans[top] = input[i];
        }
        else{
            if(TOP==-1 || input[i]=='('){
                TOP++;
                stack[TOP]=input[i];
            }
            
            else if(Prec(input[i])==Prec(stack[TOP])){
                if(Prec(input[i]) == 3 && Prec(stack[TOP]) == 3){
                    TOP++;
                    stack[TOP] = input[i];
                }
                else{
                    top++;
                ans[top] = stack[TOP];
                stack[TOP] = input[i];
                }
                
            }
            else if(input[i]==')' || Prec(input[i])<Prec(stack[TOP])){
                while(TOP!=-1 || stack[TOP]=='('){
                    if(stack[TOP]!='('){
                    top++;
                    ans[top] = stack[TOP];
                    stack[TOP] = '\0';
                    TOP--;
                    }
                    else{
                        break;
                    }
                }
                
                if(input[i]!='(' && input[i]!=')')
                {
                TOP++;
                stack[TOP] = input[i];    
                }
            }
            else if(Prec(input[i])>Prec(stack[TOP])){
                TOP++;
                stack[TOP]=input[i];
            }
        }
        if(i==n-1){
            if(TOP!= -1){
                while(TOP!=-1){
                    if(stack[TOP]!='(' && stack[TOP]!=')'){
                    top++;
                    ans[top] = stack[TOP];
                    stack[TOP] = '\0';
                    TOP--;
                    }
                    else{
                    stack[TOP] = '\0';
                        TOP--;
                        
                    }
                }
            }
        }
    }
    printf("%s", ans);
}
