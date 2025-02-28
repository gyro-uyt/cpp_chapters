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

// Base class
class Employee
{
public:
    int id;
    float salary;

    Employee(){}
    Employee(int empId)
    {
        id = empId;
        salary = 69.0;
    }
    void print()
    {
        cout<<"Employee id:"<<id<<" has a salary of Rs."<<salary<<endl;
    }
};

/* Derived class Syntax:
class {{derived-class-name}} : {{visibility-mode}} {{base-class-name}}  // {{}} indicates items to be Replaced with
{
    class members/methods/etc.
}*/
/*
Note:
1.Default visibility mode is private.
2.Public Visibility mode: Public members of the base class becomes Public members of the derived class.
3.Private Visibility mode: Public members of the base class becomes Private members of the derived class.
4.Private Members of the Base class can NEVER be inherited.
*/

// Creating a Programmer class derived from Employee base class
class Programmer :public Employee
{
public:
    Programmer(){}
    Programmer(int pId)
    {
        id = pId;
    }
    int langLearn = 5;
    void printData()
    {
        cout<<"Derived class Programmer has ID:"<<id<<endl;
    }
};
int main()
{
    Employee n1, n2(23), n3(69);
    n1.print();
    n2.print();
    n3.print();
    
    Programmer p1(42);
    cout<<p1.langLearn<<endl;
    p1.printData();
    cout<<p1.id<<endl;  // p1.id is only accessible as we have inherited Publically

    return 0;
}
