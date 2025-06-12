import java.util.Random;
import java.util.Scanner;

public class RockPaperScissors {
    public static void main(String[] args) {

        // Declare variables
        Scanner scanner = new Scanner(System.in);
        Random random = new Random();

        String[] choices = {"rock", "paper", "scissors"};
        String playerChoice;
        String computerChoice;
        String playAgain = "yes";

        do {
            // Get choice from users
            System.out.print("Enter your move (rock, paper, scissors): ");
            playerChoice = scanner.nextLine().toLowerCase();
            if (!playerChoice.equals("rock") && !playerChoice.equals("paper") && !playerChoice.equals("scissors")) {
                System.out.println("Invalid move!");
                continue;
            }

            // Get random choice for the computer
            computerChoice = choices[random.nextInt(0, 3)];
            System.out.println("Computer's move: " + computerChoice);

            // Check win conditions
            if (playerChoice.equals(computerChoice)) {
                System.out.println("It's a Draw");

            } else if (playerChoice.equals("rock") && computerChoice.equals("scissors") ||
                    playerChoice.equals("paper") && computerChoice.equals("rock") ||
                    playerChoice.equals("scissors") && computerChoice.equals("paper")) {
                System.out.println("You Win");

            } else {
                System.out.println("You Loose");
            }

            // Ask to play again?
            System.out.print("Play again (yes/no): ");
            playAgain = scanner.nextLine().toLowerCase();
        } while (playAgain.equals("yes"));
        // Goodbye message
        System.out.println("\nIt was a nice match, come play again sometime.");
        scanner.close();
    }
}
