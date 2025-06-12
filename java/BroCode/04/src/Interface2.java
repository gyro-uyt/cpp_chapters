public class Interface2 {
    public static void main(String[] args){

        // Interface -> A blueprint for a class that specifies a set of abstract methods
        //              that implementing classes must define
        //              Supports multiple inheritance-like behaviour

        Rabbit2 rabbit2 = new Rabbit2();
        Hawk2 hawk2 = new Hawk2();
        Fish2 fish2 = new Fish2();

        rabbit2.flee();
        hawk2.hunt();
        fish2.flee();   // can have 2 parents
        fish2.hunt();
    }
}
