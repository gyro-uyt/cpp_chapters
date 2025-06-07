import java.util.Random;
import java.util.Scanner;

public class DiceRollerCLI {
    public static void main(String[] args) {

        // Java Dice Roller Program

        Scanner scanner = new Scanner(System.in);
        Random random = new Random();

        // Get # of dices from the user
        int numOfDice;
        int total = 0;
        System.out.print("Enter the # of dice to roll: ");
        numOfDice = scanner.nextInt();

        // Check if # of dice > 0
        if (numOfDice < 1) {
            System.out.println("# of dice must be greater than 0");
        } else {
            // Roll all the dice
            for (int i = 0; i < numOfDice; i++) {
                int roll = random.nextInt(1, 7);
                printDie(roll);
                System.out.println("You rolled: " + roll + "\n");
                // Get the total
                total += roll;
            }
            System.out.println("Total: " + total);
        }
        scanner.close();
    }

    // Display the Ascii of dice
    static void printDie(int roll) {

        String dice1 = """
                 -------
                |       |
                |   ●   |
                |       |
                 -------""";
        String dice2 = """
                 -------
                | ●     |
                |       |
                |     ● |
                 -------""";
        String dice3 = """
                 -------
                | ●     |
                |   ●   |
                |     ● |
                 -------""";
        String dice4 = """
                 -------
                | ●   ● |
                |       |
                | ●   ● |
                 -------""";
        String dice5 = """
                 -------
                | ●   ● |
                |   ●   |
                | ●   ● |
                 -------""";
        String dice6 = """
                 -------
                | ●   ● |
                | ●   ● |
                | ●   ● |
                 -------""";

        switch (roll) {
            case 1 -> System.out.println(dice1);
            case 2 -> System.out.println(dice2);
            case 3 -> System.out.println(dice3);
            case 4 -> System.out.println(dice4);
            case 5 -> System.out.println(dice5);
            case 6 -> System.out.println(dice6);
        }
    }
}
