class parent{
    void xshow(){
        System.out.println("parent");
    }
}
class child extends parent{
    void show(){
        System.out.println("child");
    }
}
public class inher1 {
    public static void main(String[] args) {
        parent p = new parent();
        p.xshow();
        child c = new child();
        c.show();
        c.xshow();
    }
}
