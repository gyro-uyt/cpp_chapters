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
    // The forward declaration class Complex; only informs the compiler that Complex exists, but its structure is unknown. Therefore,
    // the implementation of sumRealComplex must be deferred until the Complex class is fully defined.
    // The sumRealComplex method, which accesses the private members of Complex, must be defined after the Complex class to avoid incomplete type errors.
    int sumCompComplex(Complex, Complex);
};

class Complex
{
    int a, b;
    //* Individually declaring functions as friend, can be tedious for many function,
    // Gives access to a specific function of Calculator, Provides better encapsulation and follows best practices.
    friend int Calculator::sumRealComplex(Complex o1, Complex o2);
    friend int Calculator::sumCompComplex(Complex o1, Complex o2);

    //* Aliter: Declaring Entire Calculator class as friend,
    friend class Calculator; // This explicitly declares the entire class Calculator as a friend of another class.
    // All member functions (public, private, or protected) of the Calculator class will have access to the private and 
    // protected members of the class that declares it as a friend, Can lead to excessive access if not used carefully.

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
int Calculator::sumCompComplex(Complex o1, Complex o2)
{
    return (o1.b + o2.b);
}

int main()
{
    Complex c1, c2;
    c1.setData(3, 6);
    c1.getData();
    c2.setData(5, 7);
    c2.getData();

    Calculator c3, c4;
    // c3.sumRealComplex(c1, c2);
    // c4.sum(3, 5);

    int sumRealcomp, sumCompcomp;
    sumRealcomp = c3.sumRealComplex(c1, c2);
    cout << "The sum of Real parts of 2 complex numbers is " << sumRealcomp << endl;
    sumCompcomp = c3.sumCompComplex(c1,c2);
    cout << "The sum of Complex parts of 2 complex numbers is " << sumCompcomp << endl;

    return 0;
}