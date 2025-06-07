import java.util.Scanner;

public class Methods {
    public static void main(String[] args) {

        // method -> a block of reusable code that is executed when called (), it's function of C++
        // overloaded methods = methods that share the same name, but different parameters

        hello();

        String name;
        int age;

        Scanner scanner = new Scanner(System.in);
        System.out.println("Enter your name and age:");
        name = scanner.nextLine();
        age = scanner.nextInt();
        scanner.close();

        hello(name, age);
        System.out.println("Hello, from main() method");
    }

    static void hello() {
        System.out.println("Hello, from the Hello() method");
        System.out.println("It's static as main() is static, and static() can call static methods only");
    }

    static void hello(String name, int age) {
        System.out.printf("Hello, %s aged %d\n", name, age);
    }
}
