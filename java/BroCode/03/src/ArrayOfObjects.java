public class ArrayOfObjects {
    public static void main(String[] args) {

        // Array of Objects

        // m-1
        Car0[] cars = new Car0[3];

        cars[0] = new Car0();
        cars[1] = new Car0();
        cars[2] = new Car0();

        cars[0].Company = "Mustang";
        cars[1].Company = "Audi";
        cars[2].Company = "Jaguar";

        System.out.println(cars[0].Company);

        // m-2 (anonymous objects)
        Car0[] kars = {new Car0("Mustang", "Yellow"),
                new Car0("Audi", "Black")};

        for (Car0 car : kars) {
            car.drive();
        }
    }
}
