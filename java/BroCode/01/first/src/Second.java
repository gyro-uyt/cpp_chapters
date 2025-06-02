public class Second {
    /*
    Variable = a reusable container for a value
        Primitive Variable = simple value stored directly in memory (stack)
            -> int, double, char, boolean
        Reference Variable = memory address (stack) that points to the (heap)
            -> string, array, object
        Steps to create a Variable
            1. Declaration
            2. Assignment

     */
    public static void main(String[] args) {

        int age; // declaration
        age = 5; // assignment
        double height = 165.4;
        char grade = 'A';
        boolean isStudent = true;
        String name = "Marcus Aurelius";

        System.out.println("Age = " + age); // String + Variable
        System.out.println("Height of student is " + height);
        System.out.println("Student got " + grade + " in mathematics");
        System.out.println("Am I a Student = " + isStudent);
        System.out.println("Hello, " + name);
    }
}
