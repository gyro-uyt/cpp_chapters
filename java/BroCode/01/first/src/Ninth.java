public class Ninth {
    public static void main(String[] args) {

        // printf() = is a method used to format output
        // %[flags][width][.precision][specifier-character]
        /*
        flags
            + -> outputs a plus
            , -> comma grouping separator, for huge numbers there are commas after every 3 decimals
            ( -> negative numbers are enclosed in ()
            space -> display a minus if negative, space if positive, useful for displaying positive, negative numbers in one line
        width
            0 -> zero padding, ex: %04d
            number -> right justified padding, ex: %4d
            negative number -> left justified padding, ex: %-4d
        .precision
            just write the number of decimals till which you want to display
            ex: %.1f -> displays till first decimal of double
            ex: %.3f -> displays till third decimal of double
        specifier character
            int = d
            char = c
            String = s
            double = f
            boolean = b
         */

        String name = "Uday Thakur";
        char firstLetter = 'U';
        int age = 19;
        double height = 165.4;
        boolean isEmployed = false;

        System.out.printf("Hello, %s\n", name);
        System.out.printf("Your name's first letter is %c\n", firstLetter);
        System.out.printf("You are %d years old\n", age);
        System.out.printf("Your are about %+.2fcm tall\n", height);
        System.out.printf("Are you Employed, %b\n", isEmployed);

        System.out.printf("\nHello, %s aged %d years, about %.1fcm tall.\n", name, age, height);

        int num1 = 1;
        int num2 = 12;
        int num3 = 123;
        int num4 = 1234;

        System.out.printf("\n%04d\n", num1);  // 0 to pad with zeros
        System.out.printf("%04d\n", num2);  // 4 as largest num is 4 length
        System.out.printf("%04d\n", num3);
        System.out.printf("%04d\n", num4);

        System.out.printf("\n%4d\n", num1);  // writing nothing with number right aligns
        System.out.printf("%4d\n", num2);  // 4 as largest num is 4 length
        System.out.printf("%4d\n", num3);
        System.out.printf("%4d\n", num4);

        System.out.printf("\n%-4d\n", num1);  // - makes it left aligns, padding is done with spaces
        System.out.printf("%-4d\n", num2);  // 4 as largest num is 4 length
        System.out.printf("%-4d\n", num3);
        System.out.printf("%-4d\n", num4);
    }
}
