import java.util.Random;
import java.util.Scanner;

public class Interaction {

    int userRow;
    int userColumn;
    int computerRow;
    int computerColumn;
    boolean gameOver = false;
    boolean xoOnly;
    boolean restart = false;
    String playerChar;
    String computerChar;
    String playAgain;
    String[][] matrix = {
            {"-", "-", "-"},
            {"-", "-", "-"},
            {"-", "-", "-"}
    };
    int countMoves;

    Scanner scanner = new Scanner(System.in);
    Random random = new Random();

    void welcome() {
        System.out.println();
        System.out.println("+-------------+");
        System.out.println("|  Welcme to  |");
        System.out.println("| Tic Tac Toe |");
        System.out.println("+-------------+");
        System.out.println();
    }

    void getPlayerChar() {
        do {
            System.out.print("Pick (X or O): ");
            this.playerChar = scanner.nextLine().trim().toUpperCase();
            System.out.println();
            if (playerChar.equals("X") || playerChar.equals("O")) {
                computerChar = playerChar.equals("X") ? "O" : "X";
                xoOnly = true;
            } else {
                System.out.println("W: Enter only 'X' or 'O'");
                xoOnly = false;
            }
        } while (!xoOnly);
    }

    void userMove() {

        boolean valid = false;
        do {
            try {


                System.out.println("\nMake your move,");
                System.out.print("Row (1/2/3): ");
                userRow = scanner.nextInt();
                this.userRow--;

                System.out.print("Column (1/2/3): ");
                userColumn = scanner.nextInt();
                this.userColumn--;

                scanner.nextLine(); // Consume leftover newline

                if (userRow < 3 && userColumn < 3 && validMove(userRow, userColumn)) {
                    matrix[userRow][userColumn] = playerChar;
                    countMoves++;
                    valid = true;
                } else {
                    System.out.println("W: Make a Valid Move");
                }
            }catch (NumberFormatException e){
                System.out.println("W: Enter only numbers (1/2/3)");
            }
        } while (!valid);

        winCondition();
    }

    void computerMove() {
        System.out.println("\nComputer's move:");
        do {
            computerRow = random.nextInt(3);
            computerColumn = random.nextInt(3);
        } while (!validMove(computerRow, computerColumn));
        matrix[computerRow][computerColumn] = computerChar;
        countMoves++;
        winCondition();
    }

    boolean validMove(int row, int column) {
        return matrix[row][column].equals("-");
    }

    void winCondition() {

        if (checkWin(playerChar)) {
            System.out.println();
            System.out.println("+-+-+-+-+");
            System.out.println("You, Wins");
            System.out.println("+-+-+-+-+\n");
            gameOver = true;
        } else if (checkWin(computerChar)) {
            System.out.println();
            System.out.println("--------------");
            System.out.println("Computer, Wins");
            System.out.println("--------------\n");
            gameOver = true;
        } else if (countMoves == 9 && !gameOver) {
            System.out.println();
            System.out.println("***********");
            System.out.println("It's a Draw");
            System.out.println("***********\n");
            gameOver = true;
        }
    }

    boolean checkWin(String symbol) {
        return (
                (matrix[0][0].equals(symbol) && matrix[0][1].equals(symbol) && matrix[0][2].equals(symbol)) ||
                        (matrix[1][0].equals(symbol) && matrix[1][1].equals(symbol) && matrix[1][2].equals(symbol)) ||
                        (matrix[2][0].equals(symbol) && matrix[2][1].equals(symbol) && matrix[2][2].equals(symbol)) ||
                        (matrix[0][0].equals(symbol) && matrix[1][0].equals(symbol) && matrix[2][0].equals(symbol)) ||
                        (matrix[0][1].equals(symbol) && matrix[1][1].equals(symbol) && matrix[2][1].equals(symbol)) ||
                        (matrix[0][2].equals(symbol) && matrix[1][2].equals(symbol) && matrix[2][2].equals(symbol)) ||
                        (matrix[0][0].equals(symbol) && matrix[1][1].equals(symbol) && matrix[2][2].equals(symbol)) ||
                        (matrix[0][2].equals(symbol) && matrix[1][1].equals(symbol) && matrix[2][0].equals(symbol))
        );
    }

    void exit() {
        System.out.println("\n*** THANKS FOR PLAYING ***");
    }

    void playAgain() {
        System.out.print("\nDo you Wanna Play Again (Y/N): ");
        playAgain = scanner.nextLine().toUpperCase();
        restart = playAgain.equals("Y");
    }
}
