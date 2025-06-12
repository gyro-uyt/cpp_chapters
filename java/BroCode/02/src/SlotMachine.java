import java.util.Random;
import java.util.Scanner;

public class SlotMachine {
    public static void main(String[] args) {

        // Declare variables
        Scanner scanner = new Scanner(System.in);
        int balance = 100;
        int bet;
        int payout = 0;
        String[] row;
        String playAgain;

        // Display Welcome message
        System.out.println("*--------------------------------*");
        System.out.println("*    WLC TO The GamE oF SlOTs    *");
        System.out.println("*  SymBols: 🍬 🍭 🍫 🍡 🧁 🍕  *");
        System.out.println("*--------------------------------*");

        // Play if Balance > 0
        while (balance > 0) {
            System.out.println("Current balance: $" + balance);
            // Enter Bet amount
            System.out.print("Place your Bet amount: $");
            bet = scanner.nextInt();
            scanner.nextLine();

            // Verify of Bet > Balance
            if (bet > balance) {
                System.out.println("Insufficient Funds!");
                continue;
            }
            // Verify if Bet > 0
            else if (bet <= 0) {
                System.out.println("Bet a Positive Amount!");
                continue;
            }
            // Subtract Bet from Balance
            else {
                balance -= bet;
            }
            // Spin Row
            System.out.println("Spinning");
            row = spinRow();

            // Print Row
            printRow(row);
            // Get Payout
            payout = getPayout(row, bet);
            if (payout > 0) {
                System.out.println("+-+-+-+-+-+-+-+");
                System.out.println(" You won $" + payout);
                System.out.println("+-+-+-+-+-+-+-+");
                balance += payout;
            } else {
                System.out.println("Sorry, you lost this round");
            }
            // Ask to play again
            System.out.print("Do you want to play again? (Y/N): ");
            playAgain = scanner.nextLine().toUpperCase();

            if (!playAgain.equals("Y")) {
                break;
            }
            System.out.println();
        }
        // Display Exit message
        System.out.println("GamE oVer! Your final Balance is $" + balance);

        scanner.close();
    }

    static String[] spinRow() {

        String[] symbols = {"🍬", "🍭", "🍫", "🍡", "🧁", "🍕"};
        String[] row = new String[3];   // new String array containing 3 elements
        Random random = new Random();

        row[0] = symbols[random.nextInt(0, symbols.length)];
        row[1] = symbols[random.nextInt(symbols.length)]; // writing 0 is not necessary
        row[2] = symbols[random.nextInt(symbols.length)];

        return row;
    }

    static void printRow(String[] row) {
        System.out.println("***************");
        System.out.println(" " + String.join(" | ", row));
        System.out.println("***************");

    }

    static int getPayout(String[] row, int bet) {

        if (row[0].equals(row[1]) && row[0].equals(row[2])) {
            return switch (row[0]) {
                case "🍬" -> bet * 5;
                case "🍭" -> bet * 7;
                case "🍫" -> bet * 8;
                case "🍡" -> bet * 10;
                case "🧁" -> bet * 15;
                case "🍕" -> bet * 30;
                default -> 0;
            };
        } else if (row[0].equals(row[1])) {
            return switch (row[0]) {
                case "🍬" -> bet * 2;
                case "🍭" -> bet * 3;
                case "🍫" -> bet * 4;
                case "🍡" -> bet * 5;
                case "🧁" -> bet * 6;
                case "🍕" -> bet * 7;
                default -> 0;
            };
        } else if (row[1].equals(row[2])) {
            return switch (row[1]) {
                case "🍬" -> bet * 2;
                case "🍭" -> bet * 3;
                case "🍫" -> bet * 4;
                case "🍡" -> bet * 5;
                case "🧁" -> bet * 6;
                case "🍕" -> bet * 7;
                default -> 0;
            };
        }
        return 0;
    }
}