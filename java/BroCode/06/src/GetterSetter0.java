public class GetterSetter0 {
    public static void main(String[] args) {

        // They help protect object data and add rules for accessing and modifying them
        // Getters -> Methods that make a field Readable
        // Setters -> Methods that make a field Writeable

        Car0 car0 = new Car0("Charger", "Yellow", 15000);

        car0.color = "Black";   // Modifiable

        System.out.println(car0.getColor() + " " + car0.getModel() + " " + car0.getPrice());


    }
}
