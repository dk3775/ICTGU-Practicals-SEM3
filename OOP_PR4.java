import java.util.*;
class marker{
    int n;
    Scanner in;
    marker(int n,Scanner in){
        this.n=n;
        this.in=in;
        runn();
    }
    int a[][] = new int[100][6];
    void runn(){
        for(int i=0;i<n;i++){
            // a[i][5]=0;
            for(int j=0;j<5;j++){
                a[i][j]=in.nextInt();
                a[i][5]=summ(a[i][5],a[i][j]);
            }
        }
        sort(a);
    }
    void sort (int[][] array){
        int n = array.length;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n - i - 1; j++) {
                if (array[j][5] < array[j + 1][5]) {
                    int[] temp = array[j];
                    array[j] = array[j + 1];
                    array[j + 1] = temp;
                }
            }
        }
    }
    int summ(int a,int b){
        return a+b;
    }
    void print(){
        for(int i=0;i<n;i++){
            for(int j=0;j<5;j++){
                    System.out.print(a[i][j]+" ");
            }
        }
    }
}
public class Codechef {
    public static void main(String[] args){
        Scanner in = new Scanner(System.in);
        Integer n = in.nextInt();
        marker m = new marker(n,in);
        m.print();
        in.close();
    }
}
