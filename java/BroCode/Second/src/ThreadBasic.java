import java.util.Scanner;
// Countdown Timer
public class ThreadBasic {
    public static void main(String[] args) throws InterruptedException {

        Scanner scanner = new Scanner(System.in);
        System.out.print("How many seconds to countdown: ");
        int countDown = scanner.nextInt();

        for (int i = countDown; i > 0; i--) {
            System.out.println("Time left: " + i + "s");
            Thread.sleep(1000); // takes time in milliseconds
        }
        System.out.println("\nTIME'S UP!");
        scanner.close();
    }
}