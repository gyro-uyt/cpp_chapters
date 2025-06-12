public class Car0 {

    private String model;
    String color;
    private int price;

    Car0(String model, String color, int price) {
        this.model = model;
        this.color = color;
        this.price = price;
    }

    String getModel() {
        return this.model;
    }

    String getColor() {
        return this.color;
    }

    int getPrice(){
        return this.price;
    }

    void setPrice(int price){
        this.price = price;
    }
}
