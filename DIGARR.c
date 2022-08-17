#include <stdio.h>

int main(void) {
	// your code goes here
	int n=0,x[1000];
    scanf("%d",&n);
	for(int i=0;i<n;i++){
        int l=0,f=0;
        char num[1000];
        scanf("%d",&l);
        scanf("%s",num);
        for(int j=0;j<l;j++){
            if(num[j]=='0'||num[j]=='5'){
                f=1;
            }
        }
        x[i]=f;
    }
    for(int i=0;i<n;i++){
        if(x[i]==1){
            printf("YES\n");
        }
        else{
            printf("NO\n");
        }
    }
	return 0;
}

