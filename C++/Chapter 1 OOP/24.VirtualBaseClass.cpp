/* In C++, a Virtual Base Class is used in inheritance to avoid duplicate instances of a base class when using multiple inheritance.
 It helps solve the Diamond Problem by ensuring that a base class is inherited only once, even if multiple derived classes inherit from it.
       A
      / \
     B   C
      \ /
       D
Here:

    B and C both inherit from A.
    D inherits from both B and C.

If A has a member variable, D will inherit two copies of A (one via B and one via C).
This can lead to ambiguity when accessing members of A.
By declaring A as a virtual base class, only one instance of A is inherited by D.
*/

#include <iostream>
using namespace std;

/*
        Student
       /      \
     Test    Sports
       \      /
        Result
*/

class Student
{
protected:
    int roll_num;
public:
    void set_rollnum(int rn)
    {
        roll_num = rn;
    }
    void print_rollnum(void)
    {
        cout<<"Your Roll Number is "<<roll_num<<endl;
    }   
};

class Test : virtual public Student
{
protected:
    float maths, physics;
public:
    void set_marks(int m, int p)
    {
        maths = m;
        physics = p;
    }
    void print_marks(void)
    {
        cout<<"Your result:"<<endl
            <<"Maths -> "<<maths<<endl
            <<"Physics -> "<<physics<<endl;
    }
};

class Sports : virtual public Student
{
protected:
    float score;
public:
    void set_score(int scr)
    {
        score = scr;
    }
    void print_score(void)
    {
        cout<<"PT -> "<<score<<endl;
    }
};

class Result : public Test, public Sports
{
    float total;
public:
    void set_total(void)
    {
        total = maths + physics + score;
    }
    void print_result(void)
    {
        set_total();
        print_rollnum();
        print_marks();
        print_score();
        cout<<"Your total score is "<<total<<"/300"<<endl;
    }
};


int main()
{
    int rn,m,p,pt;
    cout<<"Enter student's Roll Number and marks obtained in Mathematics, Physics & PT"<<endl;
    cin>>rn>>m>>p>>pt;

    Result Santosh;
    Santosh.set_rollnum(rn);
    Santosh.set_marks(m,p);
    Santosh.set_score(pt);
    Santosh.print_result();

    return 0;
}
