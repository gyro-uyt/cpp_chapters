/*
Templates with multiple parameters

Syntax:
template <class T1, class T2>
class NameOfClass
{
    // body
}
*/

#include <iostream>
using namespace std;

template <class T1, class T2>
class MyClass
{
    T1 data1;
    T2 data2;

public:
    MyClass(T1 a, T2 b)
    {
        data1 = a;
        data2 = b;
    }
    void display()
    {
        cout << data1 << endl
             << data2 << endl;
    }
};

int main()
{
    MyClass obj1(4, "hello");            // Implicit Specification
    MyClass<char, float> obj2('x', 6.9); // Explicit Specification

    obj1.display();
    obj2.display();

    return 0;
}

/*
1. What is char*?
    A char* (character pointer) is a pointer to a character or a sequence of characters (a C-style string). It holds the memory address of the
    first character in a sequence.

        char* ptr = "hello";
    Here, ptr is a pointer that stores the memory address of the first character of "hello".
    "hello" is actually stored in read-only memory(ROM), so modifying ptr later is undefined behavior,
    hence use of 'const' is recommended with char*, The const ensures that the string cannot be modified.

2. How char* Works with Dynamic Memory?
    A char* can also point to dynamically allocated memory using new:

        char* ptr = new char[6];  // Allocating space for 6 characters
        strcpy(ptr, "hello");  // Copying "hello" into allocated space
        cout << ptr;
        delete[] ptr;  // Free memory
    Here, "hello" is not stored in read-only memory but in heap memory, so we can modify it.

Modern C++ prefers string over char* because it's safer and easier to use.
*/