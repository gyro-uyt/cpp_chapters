// Function Overloading in C++ is a feature that allows multiple functions to have the same name but with different 
// parameter lists (type, number, or order of parameters). The compiler determines which function to call based on the 
// arguments provided during the function call. This is an example of polymorphism in C++.

// Key Rules for Function Overloading:
//     1)Functions must have the same name.
//     2)Parameter lists must differ in one of the following ways:
//         i)Number of parameters.
//        ii)Types of parameters.
//       iii)Order of parameters.
//     3)Return type alone cannot distinguish overloaded functions.
#include <iostream>
using namespace std;

int sum(int a, int b){
    cout<<"functions with 2 variables"<<endl;
    return a+b;
}

int sum(int a, int b, int c){
    cout<<"functions with 3 variables"<<endl;
    return a+b+c;
}

// Calculate the volume of a cylinder
int volume(double r, int h){
    return(3.14 * r *r *h);
}

// Calculate the volume of a cube
int volume(int a){
    return (a * a * a);
}

// Rectangular box
int volume (int l, int b, int h){
    return (l*b*h);
}

int main(){
    cout<<"The sum of 5 and 6 is: "<< sum(5,6)<<endl;
    cout<<"The sum of 5,6 and 10 is: "<< sum(5,6,10)<<endl;
    cout<<"The volume of cuboid of 3, 7 and 6 is "<<volume(3, 7, 6)<<endl;
    cout<<"The volume of cylinder of radius 3 and height 6 is "<<volume(3, 6)<<endl;
    cout<<"The volume of cube of side 3 is "<<volume(3)<<endl;
    return 0;
}