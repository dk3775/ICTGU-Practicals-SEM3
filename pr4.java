import java.util.*;
public class pr4 {
	public static void main(String[] args) {
		Scanner dhyey = new Scanner(System.in);
		int a,b;
		System.out.println("Enter Both Numbers : ");
		a=dhyey.nextInt();
		b=dhyey.nextInt();
		System.out.println("Addition of "+a+" and "+b+" Results : "+(a+b));
		System.out.println("Multiplication of "+a+" and "+b+" Results : "+(a*b));
		System.out.println("Substraction of "+a+" and "+b+" Results : "+(a-b));
		System.out.println("Division of "+a+" and "+b+" Results : "+(a/b));
		System.out.println("Reminder of "+a+" and "+b+" Results : "+(a%b));
	}
}
