/* package codechef; // don't place package name! */

import java.util.*;
import java.lang.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */
class TOWEROFHANOI
{
	public static void main (String[] args) throws java.lang.Exception
	{
		// your code goes here
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        char a='A',b='B',c='C';
        towerofhanoi(t,a,b,c);
        sc.close();
	}
    static int towerofhanoi(int n, char from, char to, char aux){
        if(n==1){
            System.out.println("Top Disk moved from "+from+" to "+to);
            return 0;
        }
        towerofhanoi(n-1, from, aux, to);
        System.out.println("Top Disk moved from "+from+" to "+to);
        towerofhanoi(n-1, aux, to, from);
        return 0;
    }
}
