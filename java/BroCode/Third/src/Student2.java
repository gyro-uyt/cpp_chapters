public class Student2 extends Person2 {

    double gpa;

    Student2(String first, String last, double gpa) {
        super(first, last);
        this.gpa = gpa;
    }

    void showGPA() {
        System.out.println(this.first + "'s gpa is: " + this.gpa);
    }
}
