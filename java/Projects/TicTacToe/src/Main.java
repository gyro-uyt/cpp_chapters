import java.util.Scanner;

public class Main {
    public static void main(String[] args) {

        int row;
        int column;

        System.out.println("*Welcome To the Tic-Tac-Toe*");
        System.out.println();

        Scanner scanner = new Scanner(System.in);

//        X | O |
//        ----------
//          | X |
//        ----------
//        O |   | X

        Board board = new Board();
        Display display = new Display();
        display.show(board.board);

        System.out.println("Make a Move:");
        row = scanner.nextInt();
        column = scanner.nextInt();
        board.updateUser(row, column);
        display.show(board.board);
        board.AiPlays();
        display.show(board.board);

        System.out.println("Make a Move:");
        row = scanner.nextInt();
        column = scanner.nextInt();
        board.updateUser(row, column);
        display.show(board.board);
        board.AiPlays();
        display.show(board.board);

        System.out.println("Make a Move:");
        row = scanner.nextInt();
        column = scanner.nextInt();
        board.updateUser(row, column);
        display.show(board.board);
        board.AiPlays();
        display.show(board.board);

        System.out.println("Make a Move:");
        row = scanner.nextInt();
        column = scanner.nextInt();
        board.updateUser(row, column);
        display.show(board.board);
        board.AiPlays();
        display.show(board.board);


    }
}
