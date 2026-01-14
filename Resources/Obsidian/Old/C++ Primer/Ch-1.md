C++ program begins execution with the first statement of main()

A function consists of 4 parts: a return type, function name, parameter list and function body, first 3 parts are collectively referred as function prototype

return a predefined C++ statement, provides a method of terminating the execution of program, when supplied with a value such as 0, that value becomes return value of the function
In standard C++, main() returns a value of zero by default if an explicit return statement is not provided 
void is used to specify a function that does not provide a return value

.h -> header file, 
standard C++ header files have no suffix
.c -> C program file
.cpp/ .cxx/ .C -> C++ program file
Check with compiler's user's guide for the appropriate suffix for you platform 

`#include <iostream>`
iostream is the iostream library standard header file, containing information like cout, cin, etc. necessary 
`#include` is a preprocess directive, causes the content of iostream to be read into our text file

`using namespace std;`
This statement is called a using directive, the names in the C++ standard library are declared in a namespace called namespace std

Compiler, part of compiler's program is to analyze the program text for correctness it cannot detect whether the meaning of the program is correct, but it can detect errors in the form of the program, 2 common forms of program errors are:
1. Syntax errors
2. Type errors

An error message contains a liner number and brief description of what the compiler believes have gone wrong, it is a good practice to correct errors in the sequence they are reported, once the error has been corrected the program should be recompiled, this cycle is often referred to as edit-compile-debug
Second part of compiler's job is to translate formally correct program text, this translation, referred to as code generation