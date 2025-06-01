/* Properties of friend functions
1. Not in the scope of class
2. since it is not in the scope of the class, it cannot be called from the object of that class. c1.sumComplex() == Invalid
3. Can be invoked without the help of any object
4. Usually contains the objects as arguments
5. Can be declared inside public or private section of the class
6. It cannot access the members directly by their names and need object_name.member_name to access any member.
*/

#include <iostream>
using namespace std;

class Complex
{
    int a, b;

    //* Below line means that non member - sumComplex funtion is allowed to do anything with my private parts (members)
    friend Complex sumComplex(Complex o1, Complex o2);

public:
    void setNumber(int n1, int n2)
    {
        a = n1;
        b = n2;
    }
    void printNumber()
    {
        cout << "Your number is " << a << " + " << b << "i" << endl;
    }
};

// user-defined Function, it is external function which can use some properties of class, it isn't a function of Complex class
Complex sumComplex(Complex o1, Complex o2) // declaring function here doesn;t means it has become Member-function, it can't access 'private' members of class Directly
// compiler is Police you need permision of class to use it's properties
{
    Complex o3;
    o3.setNumber((o1.a + o2.a), (o1.b + o2.b));
    // a=3; throws error:( as 'a' is not defined whose 'a' o1,o2?
    return o3;
}

int main()
{
    Complex c1, c2, sum;
    c1.setNumber(1, 4);
    c1.printNumber();

    c2.setNumber(5, 8);
    c2.printNumber();

    sum = sumComplex(c1, c2);
    sum.printNumber();

    return 0;
}
