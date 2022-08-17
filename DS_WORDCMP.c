#include <stdio.h>

int main(void) {
	// your code goes here
	int n=0;
	char s[6],s2[6],a[1000][6][6];
	scanf("%d",&n);
	for(int i=0,k=0;i<n;i++,k++){
	    scanf("%s",s);
	    scanf("%s",s2);
	    for(int j=0;j<6;j++){
	        if(s[j]==s2[j]){
	            a[i][k][j]='Y';
	        }else{
	            a[i][k][j]='N';
	        }
	    }
	}
	for(int i=0;i<n;i++){
    	printf("- %s\n",a[i][i]);
	}
	return 0;
}

