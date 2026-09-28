
public class ArgumentCount {

    public static void main(String[] args) {
        // args.length gives the total number of command-line arguments passed
        int count = args.length;

        System.out.println("Number of arguments provided: " + count);

        // Optional: List all provided arguments
        if (count > 0) {
            System.out.println("Arguments provided:");
            for (int i = 0; i < args.length; i++) {
                System.out.println("Arg " + (i + 1) + ": " + args[i]);
            }
        }
    }
}
