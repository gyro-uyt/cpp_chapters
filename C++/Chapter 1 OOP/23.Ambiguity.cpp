// Ambiguity in Inheritance arises when 2 base functions have different functions but of same Name, then it is not possible to decide which function to inherit from which base as both have same names.
#include<iostream>
using namespace std;

class Base1
{
    public:
        void greet(void)
        {
            cout<<"How are you"<<endl;
        }
};

class Base2
{
    public:
        void greet(void)
        {
            cout<<"Kaise ho"<<endl;
        }
};

class Derived : public Base1, public Base2
{
    
};

int main()
{
    Derived d1;
    d1.greet();

    return 0;
}
