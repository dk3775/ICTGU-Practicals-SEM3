public class pr3 {
	int pen(){
		return 12*10;
	}
	int book(){
		return 6*40;
	}
	public static void main(String[] args) {
		pr3 obj = new pr3();	
		System.out.println("Cost of Pens : "+obj.pen());
		System.out.println("Cost of Books : "+obj.book());
	}
}
