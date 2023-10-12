class  Employee1{

       String  name;
       int year_of_joining;
       int salary;
       String  address;

    public Employee1(String n ,int join,int s,String add){
        name = n;
        year_of_joining = join;
        salary = s;
        address = add;
    }

    public void Detail(){
       
       System.out.println(name  +"\t\t" +year_of_joining +"\t\t" +salary +"\t\t" +address);
    }
}

    public class Employee {
    public static void main(String[] args) {

        Employee1 obj1 =new Employee1 ("harry",2012,20000,"Patna");
        Employee1 obj2 = new Employee1("John",2015,30000,"lucknow");
        Employee1 obj3 = new Employee1("Adeem",2010,120000,"Aligarh");
        System.out.println("Name \t  " + "Year of joining \t "+ "Salary \t"+ "Address \t" );
        obj1.Detail();
        obj2.Detail();
        obj3.Detail();
    }
}