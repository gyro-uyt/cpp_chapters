#include <iostream>
using namespace std;

class Complex
{
    int a, b;

public:
    // Creating a Constructor
    // Constructor is a special member function with the same name as of the class.
    // It is used to initialize the objects of its class
    // It is automatically invoked(called) whenever an object is created

    Complex(void); // Constructor declaration
    //* function of same name as of class is CONSTRUCTOR

    void printNumber()
    {
        cout << "Your number is " << a << " + " << b << "i" << endl;
    }
};
Complex ::Complex(void) // ----> This is a default constructor as it accepts no parameters
{
    a = 10;
    b = 0;
    cout << "Hello world" << endl; // gets executed each time a object is initialised
}

int main()
{
    Complex c1, c2, c3;
    c1.printNumber();
    c2.printNumber();
    c3.printNumber();
    c3.printNumber();

    Complex a1; //* the moment a object is created Constructor is invoked automatically.
    return 0;
}
/* 
Characteristics of Constructors
    1. It should be declared in Public section of the class
    2. They are automatically invoked whenever the object is created
    3. They cannot return values and do not have return types
    4. It can have default arguements
    5. We cannot refer to their address
*/