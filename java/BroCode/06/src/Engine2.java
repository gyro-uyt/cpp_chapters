public class Engine2 {

    String type;

    Engine2(String type){
        this.type=type;
    }

    void start(){
        System.out.println("You started the "+this.type+" engine.");
    }
}
