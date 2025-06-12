public class Rectangle1 extends Shape1{

    double length, width;

    Rectangle1(double length, double width){
        this.length=length;
        this.width=width;
    }

    @Override
    double area(){
        return length*width;
    }
}
