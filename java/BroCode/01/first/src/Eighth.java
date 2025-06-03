import java.util.Scanner;

public class Eighth {
    public static void main(String[] args) {

        Scanner scanner = new Scanner(System.in);

        double perpendicular, base, hypotenuse;
        System.out.print("Enter the Perpendicular distance: ");
        perpendicular = scanner.nextDouble();
        System.out.print("Enter the Base distance: ");
        base = scanner.nextDouble();

        hypotenuse = Math.sqrt(Math.pow(perpendicular, 2) + Math.pow(base, 2));

        System.out.print("The hypotenuse would be: " + hypotenuse);

        scanner.close();
    }
}
