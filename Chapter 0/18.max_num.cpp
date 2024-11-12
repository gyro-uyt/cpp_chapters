#include <iostream>
#include <algorithm>        //*** for MAX function ***//
using namespace std;

int main(){
    int num1, num2, c;
    cout<<"Enter num1: "<<endl;
    cin>>num1;
    cout<<"Enter num2: "<<endl;
    cin>>num2;

    c = max(num1, num2);
    cout<< c <<endl;

    return 0;
}