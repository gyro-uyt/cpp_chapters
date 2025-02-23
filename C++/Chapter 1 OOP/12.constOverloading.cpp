#include <iostream>
using namespace std;

class Complex
{
    int a;
    int b;

public:
    Complex()
    {
        a = 0;
        b = 0;
    }
    Complex(int x)
    {
        a = x;
        b = 0;
    }
    Complex(int x, int y)
    {
        a = x;
        b = y;
    }
    // this is Constructor Overloading, it automatically follows different definations according to the arguement

    void print();
};
void Complex::print()
{
    cout << a << "+" << b << "i\n";
}
int main()
{
    Complex c1;
    c1.print();

    Complex c2(4);
    c2.print();

    Complex c3(3, 7);
    c3.print();

    return 0;
}