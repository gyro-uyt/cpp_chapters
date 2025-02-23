#include <iostream>
using namespace std;

class Complex
{
    int a, b;

public:
    Complex(int x, int y) // ---> this is a Parameterised Constructor as it takes 2 parameters
    {
        a = x;
        b = y;
    }
    void print(void)
    {
        cout << "Complex Number is " << a << "+" << b << "i\n";
    }
};

int main()
{
    // Implicit call
    Complex c1(5, 6);
    c1.print();

    // Explicit call
    Complex c2 = Complex(3, 7);
    c2.print();

    return 0;
}