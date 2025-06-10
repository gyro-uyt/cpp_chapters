public class Car0 {

    String Company = "BMV";
    String model1 = "M5 Competition";
    String model2 = "X7";
    String color;
    int year = 2015;
    double price = 50000.50;

    Car0(){

    }
    Car0(String company, String color) {
        this.Company = company;
        this.color = color;
    }

    void start() {
        System.out.println("You started the Engine");
    }

    void stop() {
        System.out.println("You stopped the Engine");
    }

    void drive(){
        System.out.printf("I drives a %s of %s color\n", Company, color);
    }
}
