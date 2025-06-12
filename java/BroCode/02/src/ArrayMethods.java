import java.util.Arrays;
import java.util.Scanner;

// Array and it's methods
public class ArrayMethods {
    public static void main(String[] args) {

//        int arr[] = {2, 45, 6};   // C++ style array
        int[] arr1 = {43, 6, 3};    // java styled array

        arr1[1] = 34;

        System.out.println(arr1[0]);
        System.out.println(arr1[1]);
        System.out.println(arr1[2]);

        int numOfElements = arr1.length;
        System.out.println("Number of elements: " + numOfElements);

        // Enhanced for loop
        for (int i : arr1) {
            System.out.printf("%d ", i);
        }
        System.out.println();

        // String array
        String[] Animals = {"Cheetah", "Sherr", "Bhediya", "Ghoda", "Billi"};
        Arrays.sort(Animals);   // Sorts the array alphabetically
        for (String animal : Animals) {
            System.out.printf("%s ", animal);
        }
        System.out.println();

        // Fill method
        String[] Animals1 = {"Cheetah", "Sherr", "Bhediya", "Ghoda", "Billi"};
        Arrays.fill(Animals1, "pineapple"); // replaces all elements
        for (String animal : Animals1) {
            System.out.printf("%s ", animal);
        }
        System.out.println();

        // User Input array
        Scanner scanner = new Scanner(System.in);
        System.out.print("Enter the length of the array: ");
        int lengthOfArray = scanner.nextInt();
        scanner.nextLine();

        String[] Food = new String[lengthOfArray];

        for (int i = 0; i < lengthOfArray; i++) {
            System.out.print("Enter the food: ");
            Food[i] = scanner.nextLine();
        }

        for (String items : Food) {
            System.out.print(items + " ");
        }
        System.out.println();

        scanner.close();
    }
}
