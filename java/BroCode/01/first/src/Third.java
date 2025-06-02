import java.util.Scanner;

public class Third {
    public static void main(String[] args) {

        // Use Input
        Scanner scanner = new Scanner(System.in);

        System.out.print("Enter your name: ");
//        String name = scanner.next(); // next only reads the char's not blanks
        String name = scanner.nextLine();   // reads the whole line

        System.out.print("What's your age: ");
        int age = scanner.nextInt();

        System.out.print("What's your gpa: ");
        double gpa = scanner.nextDouble();

//      !Common Issue -> if you take a string input after an integer input, Anomaly happens
//      bcz. when you give i/p and press Enter, an escape sequence character(\n) remained in buffer, which goes directly in the String
        System.out.print("Enter an integer: ");
        int x = scanner.nextInt();

        scanner.nextLine(); // use this to dispose of any buffers

        System.out.print("Enter name: ");
        String input = scanner.nextLine();

        System.out.println(x + " " + input);

        System.out.println("Hello, " + name + " aged " + age + " years, " + "you have scored gpa of " + gpa);

        scanner.close();
    }
}
