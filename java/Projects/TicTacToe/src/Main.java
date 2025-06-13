public class Main {
    public static void main(String[] args) {

        Interaction interaction = new Interaction();
        Core core = new Core();
        Display display = new Display();

        interaction.welcome();

        display.showMatrix(interaction.matrix);
        interaction.userMove();
        display.showMatrix(interaction.matrix);

        interaction.computerMove();
        display.showMatrix(interaction.matrix);

        interaction.userMove();
        display.showMatrix(interaction.matrix);

        interaction.computerMove();
        display.showMatrix(interaction.matrix);

        interaction.userMove();
        display.showMatrix(interaction.matrix);

        interaction.computerMove();
        display.showMatrix(interaction.matrix);
    }
}
