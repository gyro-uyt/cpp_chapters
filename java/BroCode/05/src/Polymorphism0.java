public class Polymorphism0 {
    public static void main(String[] args) {

        // Polymorphism -> Poly means Many & Morph means Shape
        //                 Objects can identify as other objects.
        //                 Objects can be created as objects of a common superclass

        // Polymorphism can also be achieved using Interfaces

        Car0 car0 = new Car0();
        Bike0 bike0 = new Bike0();
        Boat0 boat0 = new Boat0();

//        Car0[] car = {car0, bike0, boat0};    // bike & boat does not identify as car, this is Wrong
//        Bike0[] bike = {car0, bike0, boat0};
//        Boat0[] boat = {car0, bike0, boat0};

        Vehicle0[] vehicle0s = {car0, bike0, boat0};    // All these identify as vehicles, this is Correct

        for (Vehicle0 vehicle: vehicle0s){
            vehicle.go();
        }

        car0.go();
        bike0.go();
        boat0.go();

    }
}
