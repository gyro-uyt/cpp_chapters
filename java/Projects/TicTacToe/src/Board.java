import java.util.Random;

public class Board {

    int userRow;
    int userColumn;
    int AiRow;
    int AiColumn;

    Random random = new Random();

    String[][] board = {
            {"-", "-", "-"},
            {"-", "-", "-"},
            {"-", "-", "-"}};

    void updateUser(int row, int column) {
        this.userRow = row;
        this.userColumn = column;
        System.out.println("\nUser's move:");
        board[row - 1][column - 1] = "X";
    }

    void updateAi(int row, int column) {
        this.AiRow = row;
        this.AiColumn = column;
        System.out.println("Computer's move:");
        board[row - 1][column - 1] = "O";
    }

    void AiPlays() {
        AiRow = random.nextInt(1, 4);
        AiColumn = random.nextInt(1, 4);

        if (AiColumn == userColumn && AiRow == userRow) {
            AiRow = random.nextInt(1, 4);
            AiColumn = random.nextInt(1, 4);
        }
        updateAi(AiRow, AiColumn);
    }
}
