#include <iostream>
using namespace std;

class Complex
{
    int a, b;

public:
    void setData(int v1, int v2)
    {
        a = v1;
        b = v2;
    }
    void getData(void)
    {
        cout << "You're complex no. is " << a << "+" << b << "i" << endl;
    }
    void sumComplex(Complex x, Complex y)
    {
        a = x.a + y.a; // x=c1 & y=c2
        b = x.b + y.b; // (x.b)--->'c1' ki 'b' value + (y.b)--->'c2' ki 'b' value
    }
};

int main()
{
    Complex c1, c2, c3;
    c1.setData(5, 6);
    c1.getData();

    c2.setData(10, 25);
    c2.getData();

    c3.sumComplex(c1, c2);
    c3.getData();

    return 0;
}