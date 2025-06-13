public class Main {
    public static void main(String[] args) {

        Interaction interaction = new Interaction();
        Display display = new Display();

        interaction.welcome();
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
    }
}
