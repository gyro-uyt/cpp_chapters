public class Car2 {

    String model;
    int year;
    Engine2 engine;

    Car2(String model, int year, String engineType) {
        this.model = model;
        this.year = year;
        this.engine = new Engine2(engineType);
    }
    void start(){
        this.engine.start();
        System.out.println("The "+this.model+" is running.");
    }
}
