public class Circle1 extends Shape1 {

    double radius;

    Circle1(double radius){
        this.radius = radius;
    }

    @Override
    double area(){
        return Math.PI*radius*radius;
    }
}
