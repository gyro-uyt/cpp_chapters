#include <iostream>
using namespace std;

int main(){
//************* POINTERS **************//
// Pointer is type of Data Type, which holds the ADDRESS of other Data types
    int a=5;
    cout<<"Value of 'a' is: "<<a<<endl;

    //*     "&x" --------> (Adddress of x) operator.
    cout<<"Address of 'a' from '&a' is: "<< &a <<endl;     // '&a' is ADDRESS OF 'a' Simply

    //*     "int*" makes a pointer vaiable 'b'           
    int* b = &a;   // 'int*' defined a variable 'b' which Holds the Address of 'a'
    cout<<"Address of 'a' from 'b' is: "<< b <<endl;    

    //*    '*x' --------> (Value at address of x) operator, dereference operator       
    cout<<"The value stored at address 'b' is: "<< *b <<endl;   // '*b' gives the Data stored at address(&)b
     
    
    // Pointer to Pointer
    int** c = &b;   // stores address of 'b' which stored the value of 'a'
    cout<<"The address of 'b' is: "<< &b <<endl;    
    cout<<"The address of 'b' is: "<< c <<endl;    

    cout<<"The value at address 'c'{address of 'a'} is: "<< *c <<endl;
    cout<<"The value at address value_at(value_at(c){value of 'a'}) is: "<< **c <<endl;

    return 0;
}
// Pointers stores the address of variables,