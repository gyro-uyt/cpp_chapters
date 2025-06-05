import java.util.Scanner;
import java.util.stream.Stream;

public class First {
    public static void main(String[] args){

        /* Logical Operators
            || -> or
            && -> and
            !  -> not
        */

        Scanner scanner = new Scanner(System.in);
        System.out.print("Enter you new username: ");
        String username = scanner.nextLine();
        scanner.close();

        if (username.length()<4 || username.length()>13){
            System.out.println("Username must be between 4-12 characters");
        } else if (username.contains(" ")||username.contains("_")) {
            System.out.println("Username must not contain any white spaces or underscores");
        }
        else{
            System.out.println("Welcome, "+username);
        }

    }
}
