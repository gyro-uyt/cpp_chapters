public class Composition2 {
    public static void main(String[] args){

        // Composition -> Represents a "part-of" relationship between objects.
        //                For example, an Engine is "part of" a Car.
        //                Allows complex objects to be constructed from smaller objects.

        Car2 car2=new Car2("Corvette", 2025, "V8");

        car2.start();

        // if we delete Car object we cannot use the engine object anymore

    }
}
