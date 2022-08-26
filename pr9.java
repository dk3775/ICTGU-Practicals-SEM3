import java.util.Scanner;

class calculate{
    double calc(double rate,double principal){
        return (rate*principal)/100;
    }
}
class sbi extends calculate{
    double rate=6.9,principal;
    sbi(double principal){
        this.principal=principal;
    }
    void display(){
        System.out.println("----------SBI----------");
        System.out.println("Monthly Interest for SBI is "+calc(rate,principal)/12);
        System.out.println("Total Interest for SBI is "+calc(rate,principal)*5);
        System.out.println("Principal Amount for SBI is "+(calc(rate,principal)*5+principal));
    }
}
class hdfc extends calculate{
    double rate=7.1,principal;
    hdfc(double principal){
        this.principal=principal;
    }
    void display(){
        System.out.println("----------HDFC----------");
        System.out.println("Monthly Interest for HDFC is "+calc(rate,principal)/12);
        System.out.println("Total Interest for HDFC is "+calc(rate,principal)*5);
        System.out.println("Principal Amount for HDFC is "+(calc(rate,principal)*5+principal));
    }
}
class boi extends calculate{
    double rate=6.5,principal;
    boi(double principal){
        this.principal=principal;
    }
    void display(){
        System.out.println("----------BOI----------");
        System.out.println("Monthly Interest for BOI is "+calc(rate,principal)/12);
        System.out.println("Total Interest for BOI is "+calc(rate,principal)*5);
        System.out.println("Principal Amount for BOI is "+(calc(rate,principal)*5+principal));
    }
}
public class pr9 {
    public static void main(String[] args){
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter the principal amount : ");
        double principal=sc.nextDouble();
        sbi s=new sbi(principal);
        hdfc h=new hdfc(principal);
        boi b=new boi(principal);
        s.display();
        h.display();
        b.display();
    }
}
