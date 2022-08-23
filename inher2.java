class Member{
    int age, sal;
    String name, address, phone;
    void printSalary(){
        System.out.println("Salary is "+sal);
    }
}
class Employee extends Member{
    String specialization;
    void printdata(){
        System.out.println("Name is "+name);
        System.out.println("Address is "+address);
        System.out.println("Phone is "+phone);
        System.out.println("Age is "+age);
        System.out.println("Specialization is "+specialization);
        printSalary();
    }
}
class Manager extends Member{
    String Department;
    void printdata(){
        System.out.println("Name is "+name);
        System.out.println("Address is "+address);
        System.out.println("Phone is "+phone);
        System.out.println("Age is "+age);
        System.out.println("Department is "+Department);
        printSalary();
    }
}
class inher2{
    public static void main(String[] args){
        System.out.println("Employee Details:");
        Employee e1 = new Employee();
        e1.name = "Dhyey";
        e1.address = "Rajkot";
        e1.phone = "5555333399";
        e1.age = 21;
        e1.specialization = "CSE";
        e1.sal = 100000;
        e1.printdata();
        System.out.println("Manager Details:");
        Manager m1 = new Manager();
        m1.name = "John";
        m1.address = "Bangalore";
        m1.phone = "9323532115";
        m1.age = 25;
        m1.Department = "IT";
        m1.sal = 15000;
        m1.printdata();

    }
}