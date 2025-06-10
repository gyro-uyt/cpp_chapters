public class Employee2 extends Person2 {

    int salary;

    Employee2(String first, String last, int salary) {
        super(first, last);
        this.salary = salary;
    }

    void showSalary() {
        System.out.println(this.first + " earns $" + this.salary + " per month");
    }
}
