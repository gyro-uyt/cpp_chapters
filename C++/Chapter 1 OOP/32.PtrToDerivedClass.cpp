#include <iostream>
using namespace std;

class BaseClass
{
public:
    int var_base;
    void show()
    {
        cout << "\nDisplaying BaseClass variable var_base " << var_base << endl;
    }
};

class DerivedClass : public BaseClass
{
public:
    int var_derived;
    void show()
    {
        cout << "\nDisplaying BaseClass variable var_base " << var_base << endl;
        cout << "Displaying DerivedClass variable var_derived " << var_derived << endl;
    }
};

int main()
{

    BaseClass *base_class_ptr;
    BaseClass obj_base;
    DerivedClass obj_derived;

    // pointing BaseClass pointer to DerivedClass
    base_class_ptr = &obj_derived; // won't throw any error!
    // this is permitted, But this ptr can't call any DerivedClass members, as it's a BaseClass ptr
    // this is known as Late Binding, meaning it will bind to BaseClass functions.
    // running show() here which is in both class, base_class_ptr will only be able to run BaseClass show()

    base_class_ptr->var_base = 69;
    base_class_ptr->show();
    // base_class_ptr->var_derived=23; ---> error: ‘class BaseClass’ has no member named ‘var_derived’

    DerivedClass *derived_class_ptr;
    derived_class_ptr = &obj_derived;

    derived_class_ptr->var_base = 23;
    derived_class_ptr->var_derived = 96;
    derived_class_ptr->show();

    return 0;
}