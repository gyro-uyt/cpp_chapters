// 5 WAP to demonstrate the use of zero arguement and parameterized constructors.

#include <iostream>
using namespace std;

class Student
{
    int rn;
    int marks;
    char sectn;

public:
    Student()
    {
        marks = 69;
        sectn = 'B';
        rn = 142;
        cout << "The roll number, marks and section of the student is " << rn << ", " << marks << " and " << sectn << endl;
    }
};

int main()
{
    Student s1;
    
    return 0;
}