public class Display {

    void show(String[][] board) {
        for (String[] input : board) {
            for (String moves : input) {
                System.out.print(moves + " ");
            }
            System.out.println();
        }
        System.out.println();
    }

}
