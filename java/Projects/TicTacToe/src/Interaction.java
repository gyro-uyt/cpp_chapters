import java.util.Random;
import java.util.Scanner;

public class Interaction {

    int userRow;
    int userColumn;
    int computerRow;
    int computerColumn;
    boolean gameOver = false;
    String playerChar;
    String computerChar;
    String[][] matrix = {
            {"-", "-", "-"},
            {"-", "-", "-"},
            {"-", "-", "-"}
    };
    static int countMoves;

    Scanner scanner = new Scanner(System.in);
    Random random = new Random();

    void welcome() {
        System.out.println("+-------------+");
        System.out.println("|  Welcme to  |");
        System.out.println("| Tic Tac Toe |");
        System.out.println("+-------------+");
        System.out.println();
        getPlayerChar();
    }

    void getPlayerChar() {
        System.out.print("Pick (X or O): ");
        this.playerChar = scanner.nextLine();
        this.playerChar = this.playerChar.toUpperCase();
        if (playerChar.equals("X")) {
            computerChar = "O";
        } else {
            computerChar = "X";
        }
        System.out.println();
    }

    void userMove() {

        boolean valid = false;
        do {
            System.out.println("\nMake your move,");
            System.out.print("Row (1/2/3): ");
            userRow = scanner.nextInt();
            this.userRow--;

            System.out.print("Column (1/2/3): ");
            userColumn = scanner.nextInt();
            this.userColumn--;

            if (validMove(userRow, userColumn)) {
                matrix[userRow][userColumn] = playerChar;
                countMoves++;
                valid = true;
            } else {
                System.out.println("W: Make a Valid Move");
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
        // User Wins
        if (matrix[0][0].equals(matrix[0][1]) && matrix[0][0].equals(matrix[0][2]) && matrix[0][0].equals(playerChar)) {
            System.out.println();
            System.out.println("+-+-+-+-+");
            System.out.println("You, Wins");
            System.out.println("+-+-+-+-+\n");
            gameOver = true;
        } else if (matrix[1][0].equals(matrix[1][1]) && matrix[1][0].equals(matrix[1][2]) && matrix[1][0].equals(playerChar)) {
            System.out.println();
            System.out.println("+-+-+-+-+");
            System.out.println("You, Wins");
            System.out.println("+-+-+-+-+\n");
            gameOver = true;
        } else if (matrix[2][0].equals(matrix[2][1]) && matrix[2][0].equals(matrix[2][2]) && matrix[2][0].equals(playerChar)) {
            System.out.println();
            System.out.println("+-+-+-+-+");
            System.out.println("You, Wins");
            System.out.println("+-+-+-+-+\n");
            gameOver = true;
        } else if (matrix[0][0].equals(matrix[1][0]) && matrix[0][0].equals(matrix[2][0]) && matrix[0][0].equals(playerChar)) {
            System.out.println();
            System.out.println("+-+-+-+-+");
            System.out.println("You, Wins");
            System.out.println("+-+-+-+-+\n");
            gameOver = true;
        } else if (matrix[0][1].equals(matrix[1][1]) && matrix[0][1].equals(matrix[2][1]) && matrix[0][1].equals(playerChar)) {
            System.out.println();
            System.out.println("+-+-+-+-+");
            System.out.println("You, Wins");
            System.out.println("+-+-+-+-+\n");
            gameOver = true;
        } else if (matrix[0][2].equals(matrix[1][2]) && matrix[0][2].equals(matrix[2][2]) && matrix[0][2].equals(playerChar)) {
            System.out.println();
            System.out.println("+-+-+-+-+");
            System.out.println("You, Wins");
            System.out.println("+-+-+-+-+\n");
            gameOver = true;
        } else if (matrix[0][0].equals(matrix[1][1]) && matrix[0][0].equals(matrix[2][2]) && matrix[0][0].equals(playerChar)) {
            System.out.println();
            System.out.println("+-+-+-+-+");
            System.out.println("You, Wins");
            System.out.println("+-+-+-+-+\n");
            gameOver = true;
        } else if (matrix[0][2].equals(matrix[1][1]) && matrix[0][2].equals(matrix[2][0]) && matrix[0][2].equals(playerChar)) {
            System.out.println();
            System.out.println("+-+-+-+-+");
            System.out.println("You, Wins");
            System.out.println("+-+-+-+-+\n");
            gameOver = true;
        }

        // Computer Wins
        if (matrix[0][0].equals(matrix[0][1]) && matrix[0][0].equals(matrix[0][2]) && matrix[0][0].equals(computerChar)) {
            System.out.println();
            System.out.println("--------------");
            System.out.println("Computer, Wins");
            System.out.println("--------------\n");
            gameOver = true;
        } else if (matrix[1][0].equals(matrix[1][1]) && matrix[1][0].equals(matrix[1][2]) && matrix[1][0].equals(computerChar)) {
            System.out.println();
            System.out.println("--------------");
            System.out.println("Computer, Wins");
            System.out.println("--------------\n");
            gameOver = true;
        } else if (matrix[2][0].equals(matrix[2][1]) && matrix[2][0].equals(matrix[2][2]) && matrix[2][0].equals(computerChar)) {
            System.out.println();
            System.out.println("--------------");
            System.out.println("Computer, Wins");
            System.out.println("--------------\n");
            gameOver = true;
        } else if (matrix[0][0].equals(matrix[1][0]) && matrix[0][0].equals(matrix[2][0]) && matrix[0][0].equals(computerChar)) {
            System.out.println();
            System.out.println("--------------");
            System.out.println("Computer, Wins");
            System.out.println("--------------\n");
            gameOver = true;
        } else if (matrix[0][1].equals(matrix[1][1]) && matrix[0][1].equals(matrix[2][1]) && matrix[0][1].equals(computerChar)) {
            System.out.println();
            System.out.println("--------------");
            System.out.println("Computer, Wins");
            System.out.println("--------------\n");
            gameOver = true;
        } else if (matrix[0][2].equals(matrix[1][2]) && matrix[0][2].equals(matrix[2][2]) && matrix[0][2].equals(computerChar)) {
            System.out.println();
            System.out.println("--------------");
            System.out.println("Computer, Wins");
            System.out.println("--------------\n");
            gameOver = true;
        } else if (matrix[0][0].equals(matrix[1][1]) && matrix[0][0].equals(matrix[2][2]) && matrix[0][0].equals(computerChar)) {
            System.out.println();
            System.out.println("--------------");
            System.out.println("Computer, Wins");
            System.out.println("--------------\n");
            gameOver = true;
        } else if (matrix[0][2].equals(matrix[1][1]) && matrix[0][2].equals(matrix[2][0]) && matrix[0][2].equals(computerChar)) {
            System.out.println();
            System.out.println("--------------");
            System.out.println("Computer, Wins");
            System.out.println("--------------\n");
            gameOver = true;
        }

        // tie
        if (countMoves==9 && !gameOver){
            System.out.println();
            System.out.println("***********");
            System.out.println("It's a Draw");
            System.out.println("***********\n");
            gameOver=true;
        }
    }

}
