#include <iostream>
using namespace std;

class A
{
    int a;

public:
    void setData(int a)
    {
        // a = a;  this is wrong as class variable collides with local variable
        // Priority is given to the Local Variable
        this->a = a;    // Using `this` to refer to member variable
        // It points to the current object of the class that is calling the member function.
    }
    /*
    1. Holds Address of the Current Object
       The this pointer stores the memory address of the object that invoked the member function.
    2. Available in Non-Static Member Functions
       It cannot be used inside static member functions since static functions do not belong to any particular object.
    3. Useful for Returning the Current Object
       It is often used in function chaining (returning *this from functions).
    */
    A & SetData(int a)
    {
        this->a = a;
        return *this;   // this returns a Object, meaning .getData() can be applied directly on it.
    }
    void getData()
    {
        cout << a << endl;
    }
};
// this is a keyword which points to the object which invokes the member function
int main()
{
    A a1;
    a1.setData(69);
    a1.getData();
    a1.SetData(96).getData();

    return 0;
}
