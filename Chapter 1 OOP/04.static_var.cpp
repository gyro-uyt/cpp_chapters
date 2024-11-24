#include <iostream>
using namespace std;

class Employee
{
    int empId;
    // int count;  // NOT useful as every object has it's Independent count, hence not usefull for counting employess
    // static int count=1000;   //* cannot be given values inside 'class'
    static int count; // staic varible is initialised to Zero(0) by Default
    //* static needs to be also declared Outside of class, as it will take memory once only for all objects and then Keeps on Updating
    // 'static variable' is shared by all objects, hence aka 'class variable', it is now class property
public:
    void setData(void)
    {
        cout << "Enter the ID of employee: ";
        cin >> empId;
        count++;
    }
    void getData(void)
    {
        cout << "ID of the employee number-" << count << " is: " << empId << endl;
    }

    //* 'getCount' is a static function of class Employee, a static function is used to access all static members/functions.
    static void getCount(void)
    {
        cout << "The value of count is " << count << endl;
    }
};

//* 'count' is static data member of class Employee
int Employee::count;    // Default value = 0
// int Employee::count = 1000; //* this is Valid, outside of class
// static variable is written Outside of 'class'

int main()
{
    Employee harry, pratham, abhay;

    // harry.empId=1;   // canot do this as 'empId' and 'count' are private variables of class Employee
    // harry.count=1;
    harry.setData();
    harry.getData();
    Employee::getCount();

    pratham.setData();
    pratham.getData();
    Employee::getCount();

    abhay.setData();
    abhay.getData();
    Employee::getCount();

    return 0;
}