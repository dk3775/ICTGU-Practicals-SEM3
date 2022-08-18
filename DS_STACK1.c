#include <stdio.h>
void push(int ax,int a[10]){
    int i=0;
    for(i=0;a[i]!='\0';i++){}
    a[i]=ax;
}
void pop(int a[10]){
    int k=0;
    for(k=0;a[k]!='\0';k++){}
    a[k-1]='\0';
}
int main(void) {
	// your code goes here
	int a[10]={'\0'};
	push(1,a);
	push(8,a);
	push(9,a);
	push(7,a);
	push(2,a);
	pop(a);
	pop(a);
	push(3,a);
	for(int j=0;a[j]!='\0';j++){
	    printf("%d ",a[j]);
	}
    // printf("%d %d",a[0],a[1]);
	return 0;
}

