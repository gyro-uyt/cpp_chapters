
import java.util.Scanner;

public class FibonacciSeries {

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.print("Enter the number of terms: ");
        int count = scanner.nextInt();

        if (count <= 0) {
            System.out.println("Please enter a positive integer.");
        } else if (count == 1) {
            System.out.println("Fibonacci Series: 0");
        } else {
            int first = 0;
            int second = 1;

            System.out.print("Fibonacci Series: " + first + " " + second);

            for (int i = 3; i <= count; i++) {
                int next = first + second;
                System.out.print(" " + next);
                first = second;
                second = next;
            }
            System.out.println();
        }

        scanner.close();
    }
}
