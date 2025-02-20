#include <iostream>
using namespace std;

class Complex
{
    int a, b;

public:
    Complex(void)
    {
        a = 1;
        b = 5;
    }
    void print(void)
    {
        cout << "Complex Number is " << a << "+" << b << "i\n";
    }
};

int main()
{
    Complex c1;
    c1.print();
    return 0;
}