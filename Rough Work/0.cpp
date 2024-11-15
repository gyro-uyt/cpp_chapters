#include <iostream>
using namespace std;

int main(){
    float x = 36;
    float & y = x;      // "&y" points the value of 'y' towards 'x', y = x
    cout<< &x <<endl<< &y <<endl;

    y=69;              // changing 'y' changes 'x' too, as both are same Person
    cout<< x <<endl;
    cout<< y <<endl;  
    cout<< &x <<endl<< &y <<endl;
    return 0;
}