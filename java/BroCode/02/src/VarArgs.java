public class VarArgs {
    public static void main(String[] args) {

        // varargs            ->  allow a method to accept a varying # of arguments, makes methods more flexible,
        // (variable arguments)   no need for overloaded methods, java will pack the arguments into an array
        //                        ...(ellipsis)

        // we want to make a method to find average, how to make?
        // No. of args can be different we'll need to overload the method for same task,

        System.out.println(avg(1,2,34,3,65,34,21,12));
    }

    // creating these many methods for same task is inefficient, hence use varargs
    static int avg(int a, int b) {
        return (a + b) / 2;
    }
    static int avg(int a, int b, int c) {
        return (a + b + c) / 2;
    }
    static int avg(int a, int b, int c, int d) {
        return (a + b + c + d) / 2;
    }
    static int avg(int a, int b, int c, int d, int e) {
        return (a + b + c + d + e) / 2;
    }
    static int avg(int a, int b, int c, int d, int e, int f) {
        return (a + b + c + d + e + f) / 2;
    }

    // varargs uses ellipsis(...) which are arrays
    static double avg(double... Numbers){

        double sum =0;
        for (double num: Numbers){
            sum+=num;
        }
        return sum/Numbers.length;
    }
}