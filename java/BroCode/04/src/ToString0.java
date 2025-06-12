public class ToString0 {
    public static void main(String[] args){

        // .toString() -> Method inherited from the Object class, used to
        //                return a string representation of an object.
        //                By default, it returns a hash code as a unique identifier.
        //                It can be overridden to provide meaningful details.

        Car0 car0 = new Car0("Ford","Mustang",1969,"Black");
        Car0 car1 = new Car0("Nissan","Skyline GT", 1989, "Dazzling Blue");

        // Before Overriding the Object method
//        System.out.println(car0);   // returns hash code
        System.out.println(car0);   // now, returns customs, that we want
        System.out.println(car1);
    }
}
