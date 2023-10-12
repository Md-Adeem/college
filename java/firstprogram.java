import java.util.Scanner;

public class firstprogram {
    int side;
    int l,b;
    float base,h;
    double r;
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        firstprogram obj = new firstprogram();
        System.out.print("Enter the Side:");
        obj.side =sc.nextInt();
        System.out.println("The area of Square is: "+ obj.area(obj.side) + " And Perimeter of square is: "+obj.perimeter(obj.side));

        System.out.print("Enter the length:");
        obj.l = sc.nextInt();
        System.out.print("Enter the breadth:");
        obj.b = sc.nextInt();
        System.out.println("The area of rectangle is: "+ obj.area(obj.l,obj.b) + " And Perimeter of rectangle is: "+obj.perimeter(obj.l,obj.b));

        System.out.print("Enter the base:");
        obj.base = sc.nextInt();
        System.out.print("Enter the height:");
        obj.h = sc.nextInt();
        System.out.println("The area of triangle is: "+ obj.area(obj.base,obj.h)+ " And Perimeter of triangle is: " +obj.perimeter(obj.side,obj.b,obj.h));

        System.out.print("Enter the radius:");
        obj.r = sc.nextDouble();
        System.out.println("The area of circle is: "+obj.area(obj.r) + " And Perimeter of circle is: " +obj.perimeter(obj.r));


    }
public int area(int side){
        return side*side;
}
public int area(int l,int b){
        return l*b;
}
public float area(float base,float h){
        return (base*h)/2;
}
public double area(double r){
        return Math.PI*r*r;
}
public int perimeter(int side){
        return  4*side;
}
public int perimeter(int l,int b){
        return 2*(l+b);
}
public float perimeter(int side,float base,float h){
        return side+base+h;
}
public double perimeter(double r){
        return 2*Math.PI*r;
}
 

}

