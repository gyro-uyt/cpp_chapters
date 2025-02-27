#include <iostream>
using namespace std;

class Student
{
    int rn;
    int gpa;
public:
    void getData(void);
    void printData(void){cout<<rn<<" has secured "<<gpa<<"gpa"<<endl;}
};
void Student::getData()
{
    cout<<"Enter the Roll number of the student: ";
    cin>>rn;
    cout<<"Enter the gpa of the student: ";
    cin>>gpa;
}
// coments here
int main()
{
    Student s1;
    s1.getData();
    s1.printData();

    return 0;
}
