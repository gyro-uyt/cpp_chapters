#include<iostream>
#include <iomanip>
using namespace std;

int main(){
 // ********** MANIPULATORS ************   
    // Manipulators controls your OUTPUT DISPLAY, like 'endl','setw',..
    int a = 5, b = 25, c = 6983;
    cout<<"The value of 'a' without setw is :"<< a <<endl;
    cout<<"The value of 'b' without setw is :"<< b <<endl;
    cout<<"The value of 'c' without setw is :"<< c <<endl<<endl;
  // 'setw' is from 'iomanip' header file, it makes Right Justified
    cout<<"The value of 'a' with SETW is :"<< setw(5) << a <<endl;
    cout<<"The value of 'b' with SETW is :"<< setw(5) << b <<endl;
    cout<<"The value of 'c' with SETW is :"<< setw(5) << c <<endl;
  // Prints your data from 5 spacing right side  

  
 // ********* OPERATOR PRECEDENCE **********
    // refer table on cppreferece_operator_precedence site
    // it tells which Function executes FIRST, higher the number on Table, higher the Precedence
    // for the same Precedence function Look for Associativity LTR or RTL(right to left)
    int m=2, n=6;
    // int p = m*5+9-34+84 // 1st put bracket on Highest Precendence then on lower then according to associativity
    int p = ((((m*5)+9)-34)+84);    // first bracket on m*5 as is has highest precd. and then +- have same precd.
                                    // assoc. of +- is LTR so putted brackets accd to that
                                    // you don't need to do that
                                    // this is Just how are compiler will do operations
                                    // it is to understand how he performs
    cout<< p <<endl;

    return 0;
} 