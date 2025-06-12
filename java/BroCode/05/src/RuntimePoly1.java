import java.util.Scanner;

public class RuntimePoly1 {
    public static void main(String[] args) {

        // Runtime polymorphism -> when the methods that gets executed is decided at
        //                         runtime based on the actual type of the object.

        Scanner scanner = new Scanner(System.in);

//        Animal1 animal1 = new Animal1();  // Animal being abstract, cannot be Instantiated
        Animal1 animal1;    // only creating object, not Instantiating, this will be either = new Dog() or new Cat() based on User input

        System.out.print("Dog or Cat? (1 = dog, 2 = cat): ");
        int choice = scanner.nextInt();

        if (choice == 1) {
            animal1 = new Dog1();   // Instantiated animal1 as Dog1
            animal1.speak();
        } else if (choice == 2) {
            animal1 = new Cat1();   // Instantiated animal1 as Cat1
            animal1.speak();
        }

    }
}
