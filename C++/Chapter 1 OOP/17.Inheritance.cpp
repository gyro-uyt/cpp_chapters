// DRY Rule states Donot Repeat Yourself    
/*
 >We can resue a class & add additional features to it
 >The concept of reusability is supported by Inheritance in C++
 >The Existing class is called as the Base Class
 >The new class which is Inherited is called as the Derived Class

 >There are 5 types of Inheritances:
    >Single Inheritance: a derived class with only one Base class
                         {A ---> B == B derives from A}  = {A <--- B == B is derived from A}
    >Multiple Inheritance: a derived class with more than one Base class, a class can inherit properties from more than one class simultaneously.
                           M ---> A <--- N
    >Heirarchical Inheritance: several derived classes from single base class.
                               M <--- A ---> N
    >Multi-level Inheritance: deriving a class from already derived class.
                              A ---> B ---> C
    >Hybrid Inheritance: a combination of multiple and multilevel inheritance.
                         A ---> {M} ---> X
                         A ---> {N} ---> X
                        
 */     
#include <iostream> 
using namespace std;

class Employee
{
    
};

int main()
{

    return 0;
}
