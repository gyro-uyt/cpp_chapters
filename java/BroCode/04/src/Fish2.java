public class Fish2 implements Predator2, Prey2{

    @Override
    public void hunt(){
        System.out.println("*The fish is hunting*");
    }

    @Override
    public void flee(){
        System.out.println("*The fish is swimming away*");
    }
}
