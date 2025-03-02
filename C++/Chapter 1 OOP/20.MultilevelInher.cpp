/*
Note: If we are Inheriting B from A and C from B: [ A--->B--->C ]
1. A is the base class for B and B is the base class for C.
2. A--->B--->C is called Inheritance path.
*/
#include<iostream>
using namespace std;

class Student
{
    protected:
        int rollNumber;
    public:
        void setRollNumber(int);
        void getRollNumber(void);
};
void Student :: setRollNumber(int rn)
{
    rollNumber = rn;
}
void Student :: getRollNumber(void)
{
    cout<<"Roll number of the student is "<<rollNumber<<endl;
}

class Exam : public Student
{
    protected:
        float maths;
        float physics;
    public:
        void setMarks(int, int);
        void getMarks(void);
};
void Exam :: setMarks(int m, int p)
{
    maths = m;
    physics = p;
}
void Exam :: getMarks(void)
{
    cout<<"Roll number "<<rollNumber<<" has secured "<<maths<<" & "<<physics<<" marks in Maths & Physics respectively."<<endl;
}

class Result : public Exam
{   
        float percentage;
    public:
        void displayResult(void);
};
void Result :: displayResult(void)
{
    percentage = (maths+physics)/2;
    cout<<"Roll number "<<rollNumber<<" has got "<<percentage<<"% in mathematics and physics."<<endl;
}

int main()
{
    Result rohit;
    rohit.setRollNumber(142);
    rohit.setMarks(97, 92);
    rohit.getRollNumber();
    rohit.getMarks();
    rohit.displayResult();
    
    return 0;
}
