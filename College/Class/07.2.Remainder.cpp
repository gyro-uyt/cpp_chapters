#include <iostream>
using namespace std;

int main(){
    int a,b,p;
    cout<<"Enter the number you want to find divide : ";
    cin>>a;

    cout<<"Enter Dividend: ";
    cin>>b;

    p= a%b ;
    cout<<"The Remainder is: "<<p<<"\n";

    return 0;
}