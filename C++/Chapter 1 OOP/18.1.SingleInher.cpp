#include <iostream>
using namespace std;

class Base
{
    int data1; // data1 here is private, hence cannot be Inherited
public:
    int data2;

    void setData();
    int getData1();    //getData1() is used to access private data member for to be used in Derived class
    int getData2();
};
void Base ::setData()
{
    data1 = 10;
    data2 = 20;
}
int Base ::getData1()
{
    return data1;
}
int Base ::getData2()
{
    return data2;
}

class Derived : public Base
{
    int data3;

public:
    void process();
    void display();
};
void Derived ::process()
{
    data3 = data2 * getData1();
}
void Derived ::display()
{
    cout << "Derived class, data3 = " << data3 << endl;
}

int main()
{
    Base n1, n2;
    n1.setData();
    cout << n1.getData1() << " " << n1.getData2() << endl;
  
    Derived d1;
    d1.setData();   // Note: we need initiale setData() again as it's new function of Derived class
    d1.process();
    d1.display();

    return 0;
}
/*
 How Inheritance actually Works?
 >Inheritance does NOT copy members. It just allows access to the base class’s public and protected members.
 >Each derived object contains a hidden base class object inside it.
 >Base class functions are called on this internal base object.
 >Private members exist but are inaccessible outside their class.
 >Only constructors are not inherited—they must be explicitly called. 
*/
/*
 Why are Base Class Constructors Automatically Called but Not Inherited?
 
*/
