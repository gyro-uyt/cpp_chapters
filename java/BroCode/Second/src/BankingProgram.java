import java.util.Scanner;

public class BankingProgram {
    static Scanner scanner = new Scanner(System.in);

    public static void main(String[] args) {

        // Java Banking Program for beginners

        double balance = 110;
        boolean isRunning = true;
        int choice;

        while (isRunning) {

            // Display Menu
            System.out.println("***************");
            System.out.println("BANKING PROGRAM");
            System.out.println("***************");
            System.out.println("1. Show Balance");
            System.out.println("2. Deposit");
            System.out.println("3. Withdraw");
            System.out.println("4. Exit");
            System.out.println("***************");

            // Get and process user's choice
            System.out.print("Enter your choice (1-4): ");
            choice = scanner.nextInt();
            switch (choice) {
                case 1 -> showBalance(balance);
                case 2 -> balance += deposit();
                case 3 -> balance -= withDraw(balance);
                case 4 -> isRunning = false;
                default -> System.out.println("Enter valid choice\n");
            }
        }

        // Exit message
        System.out.println("Thank You");
    }

    // showBalance()
    static void showBalance(double balance) {
        System.out.printf("User's balance: $%.2f\n\n", balance);
    }

    // Deposit()
    static double deposit() {

        System.out.print("Enter the amount to be deposited: ");
        double amount = scanner.nextDouble();
        if (amount < 0) {
            System.out.println("Amount can't be Negative\n");
            return 0;
        } else {
            System.out.printf("$%.2f has been deposited successfully\n\n", amount);
            return amount;
        }
    }

    // withdraw()
    static double withDraw(double balance) {

        System.out.print("Enter the amount to withdraw: ");
        double amount = scanner.nextDouble();
        if (amount < 0) {
            System.out.println("Enter the magnitude of the amount to be deducted");
            return 0;
        }
        else if (amount > balance) {
            System.out.println("Insufficient Balance\nPress '1' to check your balance\n");
            return 0;
        } else {
            System.out.printf("$%.2f has been deducted successfully\n\n",amount);
            return amount;
        }
    }
}
