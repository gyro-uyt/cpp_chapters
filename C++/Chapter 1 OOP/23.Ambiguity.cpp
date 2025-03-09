// Ambiguity in Inheritance arises when 2 base functions have different functions but of same Name, then it is not possible to decide which function to inherit from which base as both have same names.
#include <iostream>
using namespace std;

class Base1
{
public:
    void greet(void)
    {
        cout << "How are you" << endl;
    }
};

class Base2
{
public:
    void greet(void)
    {
        cout << "Kaise ho" << endl;
    }
};

class Derived : public Base1, public Base2
{
public:
    // Not instructing anything here about from where to inherit, calling the greet function which is defined in 2 classes causes ambiguity
    void greet()
    {
        Base2::greet();     // this is how we Instruct from where to inherit the greet()
    }
};

class B
{
public:
    void greet()
    {
        cout<<"Good morning my people"<<endl;
    }
};

class D : public B
{
public:
    void greet()
    {
        cout<<"Yokoso, watashi no Soul Society."<<endl;
    }
};
int main()
{
    // Ambiguity 1
    Derived d1;
    d1.greet();
    
    // Ambiguity 2
    D object1;
    object1.greet();    // Both class B and D have functions of same name, the ambiguity is which to call
                        // by default the Derived class functn. overwrites the Base class
    return 0;
}


