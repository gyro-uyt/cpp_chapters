
public class TypeCastingDemo {

    public static void main(String[] args) {

        // 1. Widening Type Casting (Implicit / Automatic)
        // Converting a smaller data type to a larger data type
        int numInt = 100;
        double numDouble = numInt; // Automatic conversion: int -> double

        System.out.println("--- Widening Type Casting ---");
        System.out.println("Original int value: " + numInt);
        System.out.println("Converted double value: " + numDouble);

        // 2. Narrowing Type Casting (Explicit / Manual)
        // Converting a larger data type to a smaller data type
        double pi = 3.14159;
        int integerPi = (int) pi; // Manual casting: double -> int (truncates decimals)

        System.out.println("\n--- Narrowing Type Casting ---");
        System.out.println("Original double value: " + pi);
        System.out.println("Converted int value: " + integerPi);

        // 3. Overflow during Narrowing Casting
        // What happens when the value exceeds the target byte limit
        int largeNumber = 130;
        byte byteNumber = (byte) largeNumber; // byte max value is 127

        System.out.println("\n--- Type Casting with Overflow ---");
        System.out.println("Original int value: " + largeNumber);
        System.out.println("Converted byte value (wrapped around): " + byteNumber);
    }
}
