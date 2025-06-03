import java.util.Scanner;

public class Fifteenth {
    public static void main(String[] args){

        // Switch and Enhanced Switch -> a replacement to many else if statements (java14)

        Scanner scanner = new Scanner(System.in);
        System.out.print("Enter the day of the week: ");
        String day = scanner.nextLine();

        switch (day){
            case "Monday", "Tuesday", "Wednesday", "Thursday", "Friday" -> System.out.println("It's a weekday");
            case "Saturday", "Sunday" -> System.out.println("It's the weekend");
            default -> System.out.println("It's no day");
        }

        scanner.close();
    }
}
