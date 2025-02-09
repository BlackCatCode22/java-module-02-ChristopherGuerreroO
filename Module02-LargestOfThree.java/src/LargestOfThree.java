import java.util.Scanner;

public class LargestOfThree {

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.println("Enter three integers:");
        int a = scanner.nextInt();
        int b = scanner.nextInt();
        int c = scanner.nextInt();

        int largest = a; // Assume a is the largest to start with

        if (b > largest) {
            largest = b; // Update largest if b is greater
        }
        if (c > largest) {
            largest = c; // Update largest if c is greater
        }

        System.out.println("The largest number is: " + largest);
    }
}
