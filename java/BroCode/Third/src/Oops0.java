public class Oops0 {
    public static void main(String[] args) {

        // Object = An entity that holds data (attributes), and can perform actions (methods/functions), it is a reference data type.

        // Overloaded constructors -> Allow a class to have multiple constructors with different parameter list. Enable objects to be initialised in various ways.

        Car0 car = new Car0();

        System.out.println(car.Company);
        System.out.println(car.model1);
        System.out.println(car.year);

        System.out.println(car.price);
        car.price = 99999.99;
        System.out.println(car.price);

        car.start();
        car.stop();
    }
}
