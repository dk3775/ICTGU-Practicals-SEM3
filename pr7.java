class major{
    int balance;
    String name,address;
    int displayBal(){
        return balance;
    }
    void displayBalan(){
        System.out.println("Balance is "+balance);
    }
    void displayData(){
        System.out.println("Name: "+name);
        System.out.println("Address: "+address);
    }
}
class minor extends major{
    void displayBalance(){
        System.out.println("Balance: "+displayBal());
    }
}
public class pr7 {
    public static void main(String[] args) {
        minor m = new minor();
        m.name = "John";    
        m.address = "Bangalore";
        m.balance = 100;
        m.displayData();
        m.displayBalance();
        major m1 = new major();
        m1.name = "Johnny";
        m1.address = "Ahemdabad";
        m1.balance = 200;
        m1.displayData();
        m1.displayBalan();
    }
}
