#include <iostream>
using namespace std;

class BaseClass
{
public:
    int var_base = 1;
    /*
    Virtual makes the default action for a pointer of BaseClass to DerivedClass from binding to BaseClass to DerivedClass
    
    Virtual functions ensure that when a base class pointer points to a derived class object, the function of 
    the derived class is executed instead of the base class function. This is the core of runtime polymorphism in C++. 
    
    By default, if a base class pointer points to a derived class object, function calls are resolved based on the 
    base class (early binding). But when you declare a function as virtual, C++ uses late binding (dynamic dispatch), 
    ensuring the derived class function is called.

    Virtual functions in C++ enable runtime polymorphism by making the function binding dynamic (late binding) 
    instead of static (early binding).
    */
    virtual void show()
    {
        cout << "\n 1 Displaying BaseClass variable var_base " << var_base << endl;
    }
};

class DerivedClass : public BaseClass
{
public:
    int var_derived = 2;
    void show()
    {
        cout << "\n 2 Displaying BaseClass variable var_base " << var_base << endl;
        cout << " 2 Displaying DerivedClass variable var_derived " << var_derived << endl;
    }
};

int main()
{
    BaseClass *base_class_ptr;
    BaseClass obj_base;
    DerivedClass obj_derived;

    base_class_ptr = &obj_derived;
    base_class_ptr->show();

    cout << endl;
    return 0;
}