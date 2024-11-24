#include <iostream>
using namespace std;

class Employee
{
    int id;
    int salary;

public:
    void setId(void);
    void getId(void);
};

void Employee::setId(void)
{
    salary = 257;
    cout << "Enter the Id of the employee: ";
    cin >> id;
}
void Employee::getId(void)
{
    cout << "The id of the emplyee is: " << id << endl;
}

int main()
{
    // Employee Uday, Rahul, Luv, Archit, Pratham;
    // Uday.setId();
    // Uday.getId();
    // Rahul.setId();
    // Rahul.getId();
    //* Insufficient for large no. of Data, use Arrays
    Employee fb[5]; // 'fb' here is the name of the company
    for (int i = 0; i < 5; i++)
    {
        fb[i].setId();
        fb[i].getId();
    }

    return 0;
}