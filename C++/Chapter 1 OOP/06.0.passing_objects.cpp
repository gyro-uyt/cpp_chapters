#include <iostream>
using namespace std;

class Complex
{
    int a;
    int b;

public:
    void setData(int v1, int v2)
    {
        a = v1;
        b = v2;
    }
    void setDataBySum(Complex o1, Complex o2) // takes two objects of the Complex class as arguments (o1 and o2)
    // Complex o1 means, we created a new object o1 just like c1,c2,c3
    //* Objects of the Same Class Can Access Each Other's Private Members:
    // In C++, objects of the same class are friends by default.
    // This means that any object of the Complex class can access the private attributes of any other object of the Complex class.
    {
        a = o1.a + o2.a; //    1 + 2i   // o1.a and o2.a refer to the 'a' attribute (real part) of the objects 'o1' and 'o2'
        b = o1.b + o2.b; // +  3 + 4o
    }                    //------------
    void printData()     //    4 + 6i
    {
        cout << "Complex number is: " << a << "+" << b << "i" << endl;
    }
};

int main()
{
    Complex c1, c2, c3;
    c1.setData(1, 2);
    c1.printData();
    
    c2.setData(3, 4);
    c2.printData();

    c3.setDataBySum(c1, c2);
    c3.printData();

    return 0;
}