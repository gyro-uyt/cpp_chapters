public class Abstraction1 {
    public static void main(String[] args){

        // abstract -> Used to define abstract classes and methods, it is the process of hiding implementation details
        //             and showing only the essential features
        //             Abstract classes can't be Instantiated directly
        //             Can contain 'abstract' methods (which must be implemented)
        //             Can contain 'concrete' methods (which are inherited)

//        Shape1 shape1 = new Shape1(); // Shape is Abstract, so it's object can't be created
        Circle1 circle1 = new Circle1(5);    // these, are normal classes, hence object can be created
        Triangle1 triangle1 = new Triangle1(2,5);
        Rectangle1 rectangle1 = new Rectangle1(4,7);

        System.out.println(circle1.area());
        System.out.println(triangle1.area());
        System.out.println(rectangle1.area());

        circle1.display();
        triangle1.display();
        rectangle1.display();
    }
}
