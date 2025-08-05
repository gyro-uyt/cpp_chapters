#include <iostream>
using namespace std;

class Student {
private:
    int rollNumber;
    string name;

public:
    // Constructor to initialize values
    Student(int r, string n) {
        rollNumber = r;
        name = n;
    }

    // Member function defined inside the class
    void display() {
        cout << "Roll Number: " << rollNumber << endl;
        cout << "Name: " << name << endl;
    }
};

int main() {
    // Creating an object of Student
    Student s1(101, "Rahul");

    // Displaying student details
    s1.display();

    return 0;
}
