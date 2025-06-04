import java.util.Scanner;

public class Sixteenth {
    public static void main(String[] args) {

        Scanner scanner = new Scanner(System.in);

        double num1;
        char operator;
        double num2;
        double result = 0;
        boolean validOperation = true;

        System.out.print("Enter the first number: ");
        num1 = scanner.nextDouble();
        System.out.print("Enter an operator (+, -, *, /, ^): ");
        operator = scanner.next().charAt(0);
        System.out.print("Enter the second number: ");
        num2 = scanner.nextDouble();

        switch (operator) {
            case '+' -> result = num1 + num2;
            case '-' -> result = num1 - num2;
            case '*' -> result = num1 * num2;
            case '/' -> {
                if (num2 == 0) {
                    System.out.println("Cannot divide by Zero!");
                    result = -1;
                    validOperation = false;
                } else {
                    result = num1 / num2;
                }
            }
            case '^' -> result = Math.pow(num1, num2);
            default -> {
                System.out.println("Enter a valid operator!");
                result = -1;
                validOperation = false;
            }
        }

        if (validOperation)
            System.out.printf("Result = %.2f", result);

        scanner.close();
    }
}
