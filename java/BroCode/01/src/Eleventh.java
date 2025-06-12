import java.util.Scanner;

public class Eleventh {
    public static void main(String[] args) {

        // .substring(start, end) = A method to extract a portion of a string

        System.out.print("Enter email: ");
        Scanner scanner = new Scanner(System.in);
        String email = scanner.nextLine();
        scanner.close();

        if (email.contains("@")) {
            int sepIndex = email.indexOf('@');
            String username = email.substring(0, sepIndex); // the 2nd number is Exclusive
            String domain = email.substring(sepIndex + 1);    // endIndex is auto-assigned to eof string

            System.out.println("username: " + username);
            System.out.println("domain: " + domain);
        } else
            System.out.println("Error: enter a valid email, containing a '@' character");
    }
}
