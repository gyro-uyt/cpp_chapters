import java.util.Scanner;

public class QuizGame {
    public static void main(String[] args) {

        // Java Quiz Game

        // Questions array[]
        String[] questions = {
                "Is this a JoJo reference?",
                "Is Dio part of the Joestars?",
                "Who says Ora Ora Ora Ora?",
                "\"Oh you're approaching me!\" was said by whom?",
                "Which of the following line was said by \"Kira Yoshikage\"?"
        };

        // Options array[][]
        String[][] options = {
                {"1. Yes Yes Yes Yes", "2. No"},
                {"1. He is", "2. NO"},
                {"1. Polnareff", "2. Avdol", "3. Kakyoin", "4. Joseph Joestar", "5. Jotaro Kujo"},
                {"1. Diavlo", "2. Kira Yoshikage", "3. Dio Brando"},
                {"1. There was no other way! The world had to be fixed! A purpose given to me! Only I could do it. Who else could have done it?", "2. I'm a person who wishes to live a very quiet life."}
        };

        // Declare variables
        int[] answers = {1, 2, 5, 3, 2};
        int score = 0;
        int guess;
        Scanner scanner = new Scanner(System.in);

        // Welcome message
        System.out.println("***********************************");
        System.out.println(" Welcome the Bizarre World of JoJo");
        System.out.println("***********************************");

        // Question (loop)
        for (int i = 0; i < questions.length; i++) {
            System.out.println(questions[i]);
            // Options
            for (String option : options[i]) {
                System.out.println(option);
            }
            // Get guess from user
            System.out.print("Choose your bet: ");
            guess = scanner.nextInt();
            // Check our guess
            if (guess == answers[i]) {
                score++;
                System.out.println("Correct");
            } else {
                System.out.println("Wrong");
            }
            System.out.println();
        }

        // Display final score
        System.out.printf("You scored %d out of %d", score, questions.length);
        scanner.close();
    }
}
