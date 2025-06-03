import java.util.Scanner;

public class Thirteenth {
    public static void main(String[] args) {

        // ternary operator ? -> Return 1 of 2 values if a condition is true
        // variable = (condition) ? ifTrue : ifFalse;

        Scanner scanner = new Scanner(System.in);
        System.out.print("Enter you marks: ");
        int marks = scanner.nextInt();

        String result = (marks >= 33) ? "PASS😊" : "FAIL😔";
        System.out.println(result);
    }
}
