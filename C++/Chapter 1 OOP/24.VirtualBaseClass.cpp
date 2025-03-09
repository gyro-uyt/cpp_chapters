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
};

class Test : public Student
{
};

class Sports : public Student
{
};

class Result : public Test, public Sports
{
};


int main()
{

    return 0;
}
