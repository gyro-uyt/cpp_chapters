// '\n' is used as Line Break in Output,, MUST BE USED IN "" ONLY

#include <iostream>
using namespace std;

int glo=7;      // GLOBAL Variable
int any=66;     // any Variable Defined Outside of any Funtion, regardless of it's name is Global Variable
int hey=100;    // GLOBAL VALUE OF "hey"

void sum(){
    // cout<<"\nWOW it's the 2nd code in a CODE";
    // cout<<"\nAWESOME ain't it\n";

    int aa=11;      // LOCAL Variable
    // cout<<aa;

    // cout<<"\n"<<any;      // "any" here is Global variable
    
    cout<<"\nThis hey is from void function where hey is not defined, hence takes value from GLOBAL: "<<hey;      // as here "hey" is not defined, it TAKES value of GLOBAL Variable "hey"
                          // it is INDEPENDENT from "hey" deined in "main()" variable
}

int main(){
    int a=5,b=45;   // int takes Integer Values, stores it in 4 bytes
    float c=43.676;  // float takes Less Decimal Value, stores it in 4 bytes
    char d='U';     // char takes a 1 character, stores it in 1 byte
    double e=34.3434634654;  // double is like float but can Store More Decmal Values, stores it in 8 bytes
    bool f=true;    // bool is true(1) & false(0), output of true is 1 and output of false is 0, stores it in 1 byte
    // cout<<"The vale of a is "<<a<<"\nThe vale of b is "<<b<<"\nThe vale of c is "<<c<<"\nThe vale of d is "<<d<<"\nThe vale of e is "<<e<<"\nThe vale of f is "<<f;
    
    cout<<"\nValue of hey in Global is: "<<hey;     // as "hey" is not defined till here, it'll take value from GLOBAL only,,

    int hey=55;           // defining Local Variable SAME AS Global Variable
    cout<<"\nThis is the value of hey from local variable, where hey is defined,, in main(): "<<hey;      // LOCAL Variable is DOMINATING over GLOBAL Variable, hence Local & Global variables can have same names

    sum();      // it's taking values from void sum() defined ABOVE

    return 0;
}

