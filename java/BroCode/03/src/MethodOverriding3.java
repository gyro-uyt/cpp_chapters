public class MethodOverriding3 {
    public static void main(String[] args){

        // Method overriding -> When a subclass provides its own implementation
        //                      of a method that is already defined.
        //                      Allows for code reusability and give specific implementations.
        // use @Override before the function to tell that's overriding

        Dog3 dog3 = new Dog3();
        Cat3 cat3 = new Cat3();
        Fish3 fish3 = new Fish3();

        dog3.move();
        cat3.move();
        fish3.move();
    }
}
