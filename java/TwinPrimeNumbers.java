import java.util.Scanner;

public class TwinPrimeNumbers {
    // Method to check if a number is prime
    static boolean isPrime(int num) {
        if (num <= 1)
            return false;
        if (num <= 3)
            return true;

        if (num % 2 == 0 || num % 3 == 0)
            return false;

        for (int i = 5; i * i <= num; i = i + 6) {
            if (num % i == 0 || num % (i + 2) == 0)
                return false;
        }
        return true;
    }

    // Method to print twin prime numbers
    static void showTwinPrimes(int n) {
        for (int i = 2; i <= n - 2; i++) {
            if (isPrime(i) && isPrime(i + 2)) {
                System.out.println("(" + i + ", " + (i + 2) + ")");
            }
        }
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.print("Enter the value of n: ");
        int n = scanner.nextInt();
        scanner.close();

        System.out.println("Twin prime numbers from 1 to " + n + ":");
        showTwinPrimes(n);
    }
}
