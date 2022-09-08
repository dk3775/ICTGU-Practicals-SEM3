/* package codechef; // don't place package name! */

import java.util.*;
import java.lang.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */
class STACK_VALID
{
	public static void main (String[] args) throws java.lang.Exception
	{
		// your code goes here
		Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        String[] res=new String[100];
        for(int i=0;i<t;i++){
            res[i]="Valid";
            int n = sc.nextInt();
            int f=0;
            int[] arr = new int[n];
            for(int j=0;j<n;j++){
                arr[j] = sc.nextInt();
                if(arr[j]==1){
                    f++;
                }if(arr[j]==0){
                    f--;
                }
                if(f<0){
                    res[i] = "Invalid";
                    continue;
                }
                // res[i] = "Valid";
            }
        }
        for(int k=0;k<t;k++){
            System.out.println(res[k]);
        }
        sc.close();
	}
}
