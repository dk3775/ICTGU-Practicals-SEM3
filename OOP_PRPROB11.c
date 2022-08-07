#include <stdio.h>

int main(void) {
	// your code goes here
	int arr[5],a[5],j=0;
	for(int i=0;i<5;i++){
	    scanf("%d",&arr[i]);
	    if(arr[i]%3==0 || arr[i]%5==0){
	        a[j]=arr[i];j++;
	    }
	}
	for(int i=0;i<j;i++){
	    if(a[i]%3==0){
	        printf("Multiple of 3: %d ",a[i]);
	    }else{
	        printf("Multiple of 5: %d ",a[i]);
	    }
	}
	return 0;
}

