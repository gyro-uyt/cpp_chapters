public class WrapperClass3 {
    public static void main(String[] args) {

        // Wrapper classes -> Allow primitive values (int, char, double, boolean)
        //                    to be used as objects. "Wrap them in an object"
        //                    Generally, don't wrap primitives unless you need an object.
        //                    Allows use of collections framework and static utility methods.

//      Old Method (for visualisation, deprecated now)
        // int a = 12;  // primitive
        Integer a = new Integer(12);    // wrapping primitive in Class, now can be used as object
        Double b = new Double(23.34);
        Character c = new Character('#');
        Boolean d = new Boolean(true);

//      New Method (auto-boxing)
        Integer p = 12; // wrapping primitive in Class, now can be used as object
        Double q = 23.34;
        Character r = '#';
        Boolean s = true;
        String t = "Pizza";

//      Unboxing
        int x = p;  // unwrapping the wrapped primitive as object

//      Utility methods

        // Primitive to String
        String j = Integer.toString(4);
        String k = Double.toString(23.2);
        String l = Character.toString('&');
        String m = Boolean.toString(false);

        String n = j + k + l + m;
        System.out.println(n);

        // String to Primitive
        int e = Integer.parseInt("123");
        double f = Double.parseDouble("24.22");
        char g = "Pizza".charAt(0);
        boolean i = Boolean.parseBoolean("true");

        // Character methods
        char letter='b';
        System.out.println(Character.isLetter(letter));
        System.out.println(Character.isUpperCase(letter));
    }
}
