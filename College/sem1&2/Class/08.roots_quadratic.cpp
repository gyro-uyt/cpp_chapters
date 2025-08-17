#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int a,b,c,x,y,m,n ;     //ax^2+bx+c=0
    cout<<"The format of Quadratic Equation should be ax^2+bx+c=0";
    cout<<"\nEnter the value of 'a'(co-efficient of x^2): ";
    cin>>a;
    cout<<"\nEnter the value of 'b'(co-efficient of x): ";
    cin>>b;
    cout<<"\nEnter the value of 'c': ";
    cin>>c;

    x=(-b+sqrt(b^2 -4*a*c))/(2*a) ;
    cout<<"\n"<<x<<"\n";

    return 0;
}