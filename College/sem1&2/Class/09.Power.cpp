#include<iostream>
#include<cmath>             // "cmath" is used for Exponents,powers,etc
using namespace std;

int main(){
    double base,exponent,result  ;   // used "double" so that decimal values & anwrs can also come
    cout<<"Enter the Base number: ";
    cin>>base;
    cout<<"Enter the Exponent of the Base: ";
    cin>>exponent;
    
    result = pow(base, exponent);
    cout<<"Result is: "<<result<<"\n";

    return 0;
}