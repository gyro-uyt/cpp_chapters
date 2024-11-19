//***** TERNARY (shorthand for if_else) *****//
#include <iostream>
using namespace std;

int main(){
    int age;
    cout<<"Enter your Age: "<<endl;
    cin>>age;
    (age >= 18) ? cout<<"Adult"<<endl : cout<<"Kid" <<endl;

    return 0;
}