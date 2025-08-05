#include <iostream>
using namespace std;

class Student
{
    char name[30];

public:
    int marks;
    int rn;

    void getdata()
    {
        {
            cout << "Enter the roll number, name and marks of the student:\n";
            cin >> rn >> name >> marks;
            cout << endl;
        }
    }
    void displaydata();
};

void Student::displaydata()
{
    cout << "Roll No. of the student is " << rn << endl;
    cout << "Name of the student is " << name << endl;
    cout << "Marks No. of the student is " << marks << endl;
    cout << endl;
}

int main()
{
    Student s1, s2;
    s1.getdata();
    s2.getdata();
    s1.displaydata();
    s2.displaydata();
    return 0;
}