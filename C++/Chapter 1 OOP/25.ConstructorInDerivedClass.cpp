/*
    >We can use Constructors in derived class.
    >If base class constructor does not have any arguements, there is no need of any constructor in derived class.
    >But if there are one or more arguements in the base class constructor, derived class need to pass arguments to the base class constructor.
    >If both base and derived classes have constructors, base class constructor is executed first.

    >In multiple inheritance, base claases are constructed in the order in which they appear in the class declaration.
    >In the multi-level inheritance, the constructors are executed in the order of Inheritance.

    >C++ supports an special syntax for passing arguments to multiple base classes.
    >The constructor of the derived class receives all the arguments at once and then will pass the calls to the respective base classes.
    >The body is called after all the constructors are finished executing.
        Derived-Constructor(arg1, arg2,...) : Base1-Constructor(arg1,arg2), Base2-Constructor(arg3,arg4)
        {
        }

    >The constructors for Virtual base classes(VIP) are invoked before an non-virtual base class.
    >If there are multiple virtual base classes, they are invoked in the order declared.
    >Any non-virtual base class are then constructed before the derived class constructor is executed.

*/
/*
Case-1
    class A : public B
    {
        Order of execution of constructor --->> B()-->A()
    };
Case-2
    class A : public B, public C
    {
        Order of execution of constructor --->> B()-->C()-->A()
    };
Case-3
    class A : public B, virtual public C
    {
        Order of execution of constructor --->> C()-->B()-->A()
    };
*/
#include <iostream> 
using namespace std;

class B1
{
    int data1;
public:
    B1(){cout<<"This is Base1 class constructor"<<endl;}
    B1(int m)
    {
        data1 = m;
    }
    void printB1(void)
    {
        cout<<"Data1 = "<<data1<<endl;
    }
};

class B2
{
    int data2;
public:
    B2(){cout<<"This is Base2 class constructor"<<endl;}
    B2(int n)
    {
        data2 = n;
    }
    void printB2(void)
    {
        cout<<"Data1 = "<<data2<<endl;
    }
};

class D : public B1, public virtual B2
{
    int data3, data4;
public:
    D(){cout<<"Derived class constructor"<<endl;}
    D(int a, int b, int c, int d) : B2(b), B1(a)    // here write B2(b) first as it will be initialised first
    {
        data3 = c, data4 = d;
    }
    void printD()
    {
        cout<<"Data3 = "<<data3<<endl;
        cout<<"Data4 = "<<data4<<endl;
    }
};

int main()
{
    B1 obj1; // Base class constructor is called 
    cout<<endl;
    D obj2; // First B2 class constructor is called as it is Virtual base class then the B1 class then D class
    // Order of Execution of constructor -> B2() -> B1() -> D()
    cout<<endl;

    D d1(1, 2, 3, 4);
    d1.printB1();
    d1.printB2();
    d1.printD();

    return 0;
}
