#include<iostream>
using namespace std;
int main(){
    int pizza,pasta,cheese,a,b,c,x,y,z,m,n ;
    cout<<"Enter the Quantity of Pizza: ";
    cin>>pizza;
    cout<<"Enter the Quantity of Pasta: ";
    cin>>pasta;
    cout<<"Enter the Quantity of Cheese: ";
    cin>>cheese;

    a=450;      // price of pizza
    b=180;      // price of pasta
    c=50;       // price of cheese

    x=a*pizza;      // amount of pizza 
    y=b*pasta;      // amount of pasta
    z=c*cheese;     // amount of cheese

    cout<<"  INVOICE:105\t\t\tDate: Sept 25, 2024\n";
    cout<<"  ITEM Name\t\t\tQty.  Rate    Amount\n";
    cout<<"  Pizza Large\t\t\t"<<pizza<<"     "<<a<<"     "<<x<<"\n";
    cout<<"  Pasta      \t\t\t"<<pasta<<"     "<<b<<"     "<<y<<"\n";
    cout<<"  Cheese      \t\t\t"<<cheese<<"     "<<c<<"      "<<z<<"\n";

    m=x+y+z; // total Amount

    cout<<"\n\t\t\t      Total Amount:   "<<m;


    cout<<"\n\n";
    return 0;
}