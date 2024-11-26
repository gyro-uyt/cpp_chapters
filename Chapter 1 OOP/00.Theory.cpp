#include <iostream>
using namespace std;

// class is a blueprint for creating objects,
// class Employee defines a generic structure that represents employees with attributes(data members) and behaviors(functions)
class Employee //* 'Employee' is CLASS
{
    // these are Private Data members of the class, By default, members of a class are private, means they cannot be accessed directly from outside the class.
    int Id, age; //* Attributes(data members)
    /*
    Attributes:
        The data members of the class (int Id and int age) store information related to the object.
        These are the "state" or "properties" of the object.

    Methods:
        The functions inside a class (setData and getData) are called methods.
        They define the behavior of the class by:
            Manipulating the attributes.
            Performing operations related to the class.
    */
public: //* Access Modifier
    // Declaring functions, Member functions(Method)
    void setData(void); // The function's implementation is outside the class (defined later using the Employee:: scope resolution operator).
    void getData(void)  //* Method (Function)
    {
        cout << "Id of the Employee is " << Id << endl;
        cout << "Age of the Employee is " << age << endl;
    }
};
void Employee::setData() // Member Function Implementation
// Scope Resolution Operator (::), it Specifies that setData belongs to the Employee class
{
    cout << "Enter the Id of the employee: ";
    cin >> Id;
    cout << "Enter the age of Employee: ";
    cin >> age;
}

int main()
{
    Employee Sameer, Sumitra; //* here 'Sameer', 'Sumitra' are the OBJECTS of the Class, These are instances of the Employee class.
    // Objects are actual entities created using the Employee class blueprint.
    Sameer.setData(); // Calls the setData function for the Sameer object, prompting the user to input the Id and age for this employee
    Sameer.getData(); // Calls the getData function for the Sameer object, printing the values of Id and age stored in Sameer

//* Each object of the Complex class (e.g., c1, c2, c3) has its own copy of the attributes a and b.

    Sumitra.setData();
    Sumitra.getData();

    return 0;
}
/*
Encapsulation:
    Private attributes (Id and age) are accessed and modified through public functions (setData and getData), ensuring controlled access to data.

Object-Oriented Design:
    The Employee class encapsulates data and behavior related to employees.
    Each object (Sameer and Sumitra) is independent and has its own data.

Object Independence:
    Changes to the Sameer object do not affect the Sumitra object and vice versa. Both have separate copies of the attributes Id and age.

Reusability:
    The Employee class can be reused to create more employee objects in the future, reducing redundancy and improving maintainability.
*/
/*
instances and objects are essentially the same thing in the context of object-oriented programming (OOP). However, there is a slight difference in how the terms are used conceptually:
Object
    An object is a specific entity created using a class as its blueprint.
    It represents a real-world entity with attributes (data) and behaviors (functions).

Instance
    An instance refers to the realization of a class in memory, meaning when an object is created, it becomes an instance of the class.
    It emphasizes the occurrence of a class being used to create a specific object.

Key Point:
Every object is an instance of its class, and the terms are often used interchangeably. The distinction mainly exists in theoretical discussions:
    When you say "object," you're referring to the entity itself.
    When you say "instance," you're referring to the fact that the object belongs to a specific class.

While in practice, people often use "object" more commonly, you can think of "instance" as a more precise term emphasizing
 the relationship between the class and the object.
*/