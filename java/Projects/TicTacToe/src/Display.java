public class Display {

    void showMatrix(String[][] board) {
        for (String[] input : board) {
            for (String moves : input) {
                System.out.print(moves + " ");
            }
            System.out.println();
        }
    }

}
