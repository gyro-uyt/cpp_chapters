public class Main {
    public static void main(String[] args) {

        Student student1 = new Student("Kakyoin", 16, 6.9);
        Student student2 = new Student("Avdol", 24, 8.4);

        System.out.println(student1.name + " " + student1.gpa);
        System.out.println(student2.name + " " + student2.gpa);
    }
}
