#include <iostream>
using namespace std;

//* Forward Declaration
class Complex; // class Calculator;
class Calculator
{
public:
    int sum(int x, int y)
    {
        return (x + y);
    }
    // int sumRealComplex(Complex o1, Complex o2)
    // {
    //     return (o1.a + o2.a);    //* throws error as there's NO guarentee that there is 'a' or 'b' in Class Complex,
    // }
    int sumRealComplex(Complex, Complex); //* therefore, we'll only declare function here and define after Complex class,
};

class Complex
{
    int a, b;
    friend int Calculator::sumRealComplex(Complex o1, Complex o2);
    friend Calculator;

public:
    void setData(int m, int n)
    {
        a = m;
        b = n;
    }
    void getData(void)
    {
        cout << "You're Complex number is " << a << "+" << b << "i" << endl;
    }
};

int Calculator::sumRealComplex(Complex o1, Complex o2) //* defined here after Complex Class,
{
    return (o1.a + o2.a);
}

int main()
{
    Complex c1, c2;
    c1.setData(3, 6);
    c1.getData();
    c2.setData(5, 7);
    c2.getData();

    Calculator c3, c4;
    c3.sumRealComplex(c1, c2);
    c4.sum(3, 5);

    int result;
    result = c3.sumRealComplex(c1, c2);
    cout << "The sum of Real parts of 2 complex numbers is " << result << endl;

    return 0;
}