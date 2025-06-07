public class TwoDArrays {
    public static void main(String[] args) {

        // 2D Arrays

        String[] fruits = {"Apple", "Mango", "Lemon"};
        String[] veggies = {"Cabbage", "onion"};
        String[] meats = {"chicken", "pork", "beef", "fish"};

//        String[][] cart = {fruits, veggies, meats};  // an array containing arrays as elements
        String[][] cart = {
                {"Apple", "Mango", "Lemon"},
                {"Cabbage", "onion"},
                {"chicken", "pork", "beef", "fish"}};  // this would also work the same

        cart[0][2] = "Pineapple"; // this is how we re-define 2D array

//        for (String[] foods:cart){
//            System.out.println(foods);    // this prints address, as each component here is a string which are reference variables
//        }

        for (String[] foods : cart) {
            for (String food : foods) {
                System.out.print(food + " ");
            }
            System.out.println();
        }
    }
}
