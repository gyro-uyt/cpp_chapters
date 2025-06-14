public class Display {

    public void showMatrix(String[][] board) {
        for (String[] input : board) {
            for (String moves : input) {
                System.out.print(moves + " ");
            }
            System.out.println();
        }
    }

}
