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

class Derived : private Base
{
    int data3;

public:
    void process();
    void display();
};
void Derived ::process()
{
    setData();  // declare here
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
    //d1.setData();   // Note: cannot be accessed as setData() is a Private function 
    d1.process();
    d1.display();
    
    return 0;
}

