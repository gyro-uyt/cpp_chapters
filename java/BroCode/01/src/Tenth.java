import java.util.Scanner;

public class Tenth {
    public static void main(String[] args) {

        // String Methods

        Scanner scanner = new Scanner(System.in);
        System.out.print("Enter the name: ");
        String name = scanner.nextLine();
        scanner.close();

        name = name.trim(); // clears any white spaces
//        name = name.toUpperCase();
//        name = name.toLowerCase();
//        name = name.replace('J', 'G');

        int length = name.length();
        char letter = name.charAt(4);
        int index = name.indexOf('s');  // returns the index of first occurrence
        int lastIndex = name.lastIndexOf('s');  // return the index of last occurrence

        if (name.isEmpty())
            System.out.println("Enter the name");
        if (name.contains(" "))
            System.out.println("You name contains a blank character");
        if (name.equals("password"))
            System.out.println("Your name can't be password");
        if (name.equalsIgnoreCase("password"))  // ignore the case sensitivity
            System.out.println("Invalid name");

        System.out.println(name + "\n" + length + "\n" + letter + "\n" + index + "\n" + lastIndex);
    }
}
