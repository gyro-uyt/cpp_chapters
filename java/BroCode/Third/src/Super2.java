public class Super2 {
    public static void main(String[] args){

        // super -> Refers to the parent class (subclass <- superclass)
        //          Used in constructors and method overriding
        //          Calls the parent constructors to initialise attributes

        // Person had 2 subclass Student & Employee
        // Person class's constructor needs first & last to initialise, hence when creating subclass constructor
        // we use super(first, last) to give the superclass their arguments
        
        Person2 person2 = new Person2("Joturo", "Kujo");
        person2.showName();

        Student2 student2 = new Student2("Jolyne","Kujo",7.77);
        student2.showName();
        student2.showGPA();

        Employee2 employee2 = new Employee2("Yoshikage","Kira", 450000);
        employee2.showName();
        employee2.showSalary();
    }
}
