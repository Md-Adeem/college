public class Employee2 {
    // Instance variables
    private String empname;
    private double basicpay;

    // Parameterized constructor to assign name and basic salary
    public Employee2(String empname, double basicpay) {
        this.empname = empname;
        this.basicpay = basicpay;
    }

    // Method to calculate and return the total salary
    public double salarycal() {
        double hra = 0.30 * basicpay; // HRA is 30% of basic pay
        double da = 0.40 * basicpay;  // DA is 40% of basic pay
        double totalSalary = basicpay + hra + da;
        return totalSalary;
    }

    public static void main(String[] args) {
        // Create an employee object with name and basic pay
        Employee2 emp = new Employee2("John Doe", 50000.0);

        // Calculate the total salary
        double totalSalary = emp.salarycal();

        // Display the result
        System.out.println("Employee Name: " + emp.empname);
        System.out.println("Basic Pay: " + emp.basicpay);
        System.out.println("Total Salary: " + totalSalary);
    }
}

