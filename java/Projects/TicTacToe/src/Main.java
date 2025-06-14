public class Main {
    public static void main(String[] args) {

        Interaction interaction = new Interaction();
        Display display = new Display();

        do {
            interaction.welcome();
            interaction.getPlayerChar();

            // Reset the game board and state before starting again
            interaction.matrix = new String[][] {
                    {"-", "-", "-"},
                    {"-", "-", "-"},
                    {"-", "-", "-"}
            };
            interaction.countMoves = 0;
            interaction.gameOver = false;

            display.showMatrix(interaction.matrix);

            while (!interaction.gameOver) {
                interaction.userMove();
                display.showMatrix(interaction.matrix);

                if (interaction.gameOver) {
                    break;
                }

                interaction.computerMove();
                display.showMatrix(interaction.matrix);
            }
            interaction.exit();
            interaction.playAgain();
        } while (interaction.restart);
    }
}
