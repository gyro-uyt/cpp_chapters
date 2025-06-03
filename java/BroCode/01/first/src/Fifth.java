import java.util.Scanner;

public class Fifth {
    public static void main(String[] args) {

        Scanner scanner = new Scanner(System.in);

        System.out.print("Enter you age: ");
        int age = scanner.nextInt();

        if (age == 18) {
            System.out.println("Congratulations, on becoming an Adult");
        } else if (age < 18) {
            System.out.println("Come back again, in " + (18 - age) + " year/s");
        } else {
            System.out.println("Welcome to the Mafia-Mundeer");
        }

        scanner.close();
    }
}