// 5 WAP to demonstrate the use of zero arguement and parameterized constructors.

#include <iostream>
using namespace std;

class Student
{

public:
    Student(int rn, char sectn, int marks)
    {
        cout << "The roll number, marks and section of the student is " << rn << ", " << marks << " and " << sectn << endl;
    }
};

int main()
{
    Student s1(142, 'B', 69);
    Student s2(137, 'B', 76);
    Student s3(27, 'A', 85);

    return 0;
}