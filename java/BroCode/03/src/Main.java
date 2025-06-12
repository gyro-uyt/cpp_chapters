public class Main {
    public static void main(String[] args) {

        StudentMain student1 = new StudentMain("Kakyoin", 16, 6.9);
        StudentMain student2 = new StudentMain("Avdol", 24, 8.4);

        System.out.println(student1.name + " " + student1.gpa);
        System.out.println(student2.name + " " + student2.gpa);
    }
}
