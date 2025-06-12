public class ClassLocalVar {

    static int x = 69;  // Class variable (global)

    public static void main(String[] args) {

        System.out.println(x);

        int x = 1;   // local variable
        System.out.println(x);

        doSomething();
    }

    static void doSomething() {

        int x = 5;  // local variable
        System.out.println(x);
    }
}
