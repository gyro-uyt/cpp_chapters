// M--->A<---N
// Syntax for inheriting in Multiple-inheritance:  
//      class Derived : visibility-mode base1, visibility-mode base2 {};
#include<iostream>
using namespace std;

class Colour
{
    public:
        int colour = 889;
};
class Type
{
    public:
        int type = 69;
};
class Car : Colour , Type
{
    public:
        void show(void)
        {
            cout<<"Type:"<<type<<" car has colour:"<<colour<<" available"<<endl;
        }
};
int main()
{
    Car R8;
    R8.show();
    
    return 0;
}
