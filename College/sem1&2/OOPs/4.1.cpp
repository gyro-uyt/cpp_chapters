#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    const int rollNumber;  // Constant data member
    string name;
    int age;

public:
    Student(int r, string n, int a) : rollNumber(r), name(n), age(a) {}

    void display() const {
        cout << "Roll Number: " << rollNumber << endl;
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }

    void setAge(int a) {
        age = a; 
    }
};

int main() {
    Student s1(101, "Rahul", 19);
    s1.display();

    s1.setAge(20);  // Modifying non-const member
    cout << "\nAfter updating age:\n";
    s1.display();

    return 0;
}
