import java.util.Scanner;

abstract class Shape {
    final double PI = 3.14;
    public abstract void volume();
}
class Cone extends Shape {
    private double radius;
    private double height;
    public Cone(double radius, double height) {
        this.radius = radius;
        this.height = height;
    }
    @Override
    public void volume() {
        double vol = (1.0 / 3.0) * PI * radius * radius * height;
        System.out.println("Volume of Cone: " + vol);
    }
}
class Sphere extends Shape {
    private double radius;
    public Sphere(double radius) {
        this.radius = radius;
    }
    @Override
    public void volume() {
        double vol = (4.0 / 3.0) * PI * Math.pow(radius, 3);
        System.out.println("Volume of Sphere: " + vol);
    }
}
public class ShapeDemo {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.print("Enter radius of Cone: ");
        double coneRadius = scanner.nextDouble();
        System.out.print("Enter height of Cone: ");
        double coneHeight = scanner.nextDouble();
        System.out.print("Enter radius of Sphere: ");
        double sphereRadius = scanner.nextDouble();
        System.out.println("\n--- Calculations ---");
        Shape shape1 = new Cone(coneRadius, coneHeight);
        Shape shape2 = new Sphere(sphereRadius);
        shape1.volume();
        shape2.volume();
        scanner.close();
    }
}
