import java.util.Scanner;

public class PrimeAndPalindrome {

    // Method to check if a number is prime
    public static boolean isPrime(int num) {
        if (num <= 1) {
            return false;
        }
        for (int i = 2; i <= Math.sqrt(num); i++) {
            if (num % i == 0) {
                return false;
            }
        }
        return true;
    }

    // Method to check if a number is a palindrome
    public static boolean isPalindrome(int num) {
        int original = num;
        int reversed = 0;

        while (num > 0) {
            int digit = num % 10;
            reversed = reversed * 10 + digit;
            num /= 10;
        }

        return original == reversed;
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.print("Enter a positive integer: ");
        int number = scanner.nextInt();

        if (number < 0) {
            System.out.println("Please enter a positive number.");
        } else {
            // Check Prime
            if (isPrime(number)) {
                System.out.println(number + " is a Prime number.");
            } else {
                System.out.println(number + " is NOT a Prime number.");
            }

            // Check Palindrome
            if (isPalindrome(number)) {
                System.out.println(number + " is a Palindrome number.");
            } else {
                System.out.println(number + " is NOT a Palindrome number.");
            }
        }

        scanner.close();
    }
}