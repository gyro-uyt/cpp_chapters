public class Calculator {

    // Non-static method to print the sum of two numbers
    public void printSum(int a, int b) {
        int sum = a + b;
        System.out.println("Sum: " + sum);
    }

    public static void main(String[] args) {
        // Create an instance of the class to call the non-static method
        Calculator calc = new Calculator();

        // Call the non-static method
        calc.printSum(15, 25);
    }
}
