class define{
    int id;
    String name;
    void setData(int id,String name){
        this.id = id;
        this.name = name;
    }
}
class disp extends define{
    void display(){
        System.out.println("Id: "+id);
        System.out.println("Name: "+name);
    }
}
public class pr8 {
    public static void main(String[] args){
        disp d = new disp();
        d.setData(1,"Dhyey");
        d.display();
    }
}