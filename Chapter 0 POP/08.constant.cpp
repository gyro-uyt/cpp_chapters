#include <iostream>
using namespace std;
int main(){
    int a = 7;
    char b = 'x';
    cout<<"The original value of 'a' is "<< a <<endl;
    cout<<"The original value of 'b' is "<< b <<endl;

     a = 957;    // Re-defining here changes the value of 'a' afte this Line he will behave as intructed here,
     b = '3';   // char, double, float anything can be changed by RE-VALUING it 
    cout<<"The Changed value of 'a' is "<< a <<endl;
    cout<<"The Changed value of 'b' is "<< b <<endl;

    // ************* Constants in C++ **************
    const float pi = 3.14;
    cout<<"Now the Value of const pi cant be changed after using const, "<< pi <<endl;
    
       // pi = 65;  // This gives ERROR, 'pi' has now become READ OLNY variable, it reamins CONST.
      // This is usefull for fixing the values of some variables like pie,e,G,g,...etc
     // it prevents mistake over future as you/else may change values that shouldn't be changed MISTANELY

    cout<<"Changing will give errors, it reamains const as "<< pi <<endl;
    
    return 0;
}
