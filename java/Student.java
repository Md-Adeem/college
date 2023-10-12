import java.util.Scanner;

public class Student {
    String name;
    int rollno;

    public static void main(String []args){
        Scanner sc =new Scanner(System.in);
        Student ob = new Student();
ob.name=sc.nextLine();
ob.rollno=sc.nextInt();
System.out.println(ob.name);
System.out.println(ob.rollno);
        
    }

    
}
