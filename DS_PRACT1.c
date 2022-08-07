#include <stdio.h>

int main(void) {
	// your code goes here

    int i=0,n,a[100];
    scanf("%d",&n);
    for(;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d",&a[i]);
    for(int i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");
    for(int i=0;i<n+1;i++)
    {
        printf("%d ",a[i]);
    }
	return 0;
}

