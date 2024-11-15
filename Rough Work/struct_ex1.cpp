#include <iostream>
#include <string>

struct Person {
    // Member variables
    std::string name;
    int age;
    double height;

    // Member function to display person's info
    void displayInfo() {
        std::cout << "Name: " << name << "\nAge: " << age << "\nHeight: " << height << " cm" << std::endl;
    }

    // Member function to check if the person is an adult
    bool isAdult() {
        return age >= 18;
    }
};

int main() {
    // Creating an instance of the Person struct
    Person person1;
    person1.name = "Alice";
    person1.age = 25;
    person1.height = 170.5;

    // Using the member functions
    person1.displayInfo();
    if (person1.isAdult()) {
        std::cout << person1.name << " is an adult." << std::endl;
    } else {
        std::cout << person1.name << " is not an adult." << std::endl;
    }

    return 0;
}
