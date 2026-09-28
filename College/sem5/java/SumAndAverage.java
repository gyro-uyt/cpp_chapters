
public class SumAndAverage {

    public static void main(String[] args) {

        double sum = 0;
        int count = 0;

        for (String arg : args) {
            double num = Double.parseDouble(arg);
            sum += num;
            count++;
        }

        if (count == 0) {
            System.out.println("No valid numbers were provided.");
            return;
        }

        double average = sum / count;

        System.out.println("Total numbers processed: " + count);
        System.out.println("Sum: " + sum);
        System.out.println("Average: " + average);
    }
}
