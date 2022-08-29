/* package codechef; // don't place package name! */

import java.util.*;
import java.lang.*;
import java.io.*;

class calculate {
    int ar[], sum;
    int n;

    calculate(int ar[], int n) {
        this.ar = ar;
        this.n = n;
    }

    int complete_sal() {
        for (int i = 0; i < n; i++) {
            sum += ar[i];
        }
        return sum;
    }

    int overall_sal() {
        int i;
        int sum=0;
        for (i = 0; i < n; i++) {
            sum += ar[i];
        }
        return sum/i;
    }
}

/* Name of the class has to be "Main" only if the class is public. */
class Codechef {
    public static void main(String[] args) throws java.lang.Exception {
        // your code goes here
        Scanner sc = new Scanner(System.in);
        int id = sc.nextInt();
        String name = sc.next();
        int n = sc.nextInt();
        int arr[] = new int[n];
        for (int i = 0; i < n; i++) {
            arr[i] = sc.nextint();
        }
        calculate c = new calculate(arr, n);
        System.out.println(c.complete_sal());
        System.out.println(c.overall_sal());
        sc.close();
    }
}
