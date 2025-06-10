public class Inheritance1 {
    public static void main(String[] args){

        // Inheritance -> One class inherits the attributes & methods from another class.
        //                Child <- Parent <- GrandParent

        // class Abc extends Xyz {...} -> Abc inherits the class Xyz

        // child class == subclass
        // parent class == superclass

        Cat1 cat = new Cat1();
        Dog1 dog = new Dog1();

        System.out.println(cat.isAlive);
        System.out.println(dog.isAlive);

        cat.speak();
        dog.speak();
    }
}
