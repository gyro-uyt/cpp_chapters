public abstract class Shape1 {
    // now, after it an object can't be created

    abstract double area(); // Abstract method, declaration only

    void display(){ // Concrete method, these are Inherited in subClass
        System.out.println("This is a Concrete method");
    }

}
