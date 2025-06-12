public class Triangle1 extends Shape1{

    double base, height;

    Triangle1(double base, double height){
        this.base=base;
        this.height=height;
    }

    @Override
    double area(){
        return 0.5*base*height;
    }
}
