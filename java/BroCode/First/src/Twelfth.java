import java.util.Scanner;

public class Twelfth {
    public static void main(String[] args) {

        System.out.println("Weight Conversion Program");
        System.out.println("1: Convert lbs to kgs\n2: Convert kgs to lbs");

        Scanner scanner = new Scanner(System.in);

        System.out.print("Choose an option: ");
        int choice = scanner.nextInt();

        if (choice == 1) {
            System.out.print("Enter the weight in pounds: ");
            double weight = scanner.nextDouble();
            double newWeight = weight * 0.4536;
            System.out.printf("Given weight in kgs is %.2f kgs.", newWeight);

        } else if (choice == 2) {
            System.out.print("Enter the weight in kgs: ");
            double weight = scanner.nextDouble();
            double newWeight = weight * 2.205;
            System.out.printf("Given weight in lbs is %.2f lbs.", newWeight);
        } else
            System.out.println("Error: Choose option 1 or 2 only");

        scanner.close();
    }
}
