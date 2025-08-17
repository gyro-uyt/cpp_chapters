#include<iostream>
using namespace std;
int main(){
    float rate,amount,SI,a,b,time ;
    cout<<"Enter the Amount: ";
    cin>>amount;
    cout<<"Enter the Rate(% pa): ";
    cin>>rate;
    cout<<"Enter the Time period(in yrs.): ";
    cin>>time;

    SI=((amount*rate*time)/100)+amount;

    cout<<"Your total amount is: "<<SI;
    cout<<"\n";

    return 0;
}
