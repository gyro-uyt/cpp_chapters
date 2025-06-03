import java.util.Random;

public class Sixth {
    public static void main(String[] args) {

        Random random = new Random();
        int num1 = random.nextInt();
        System.out.println("Random number1 is " + num1);   // in this random number would be +- 2 billion

        int num2 = random.nextInt(1, 7); // '1' is inclusive & '7' is Exclusive of the range
        System.out.println("Random number2 is " + num2);   // now the number would be from 1 to 6

        double num3 = random.nextDouble(); // generates random number between 0 & 1
        System.out.println("Random number3 is " + num3); // just the decimal portion

        boolean isHeads = random.nextBoolean();
        if (isHeads)
            System.out.println("Head");
        else
            System.out.println("Tails");
    }
}
