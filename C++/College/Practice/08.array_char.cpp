#include <iostream>
using namespace std;

int main(){
    //*** STRANGE BEHAVIOUR OF 'arrays' WITH 'char' ***//
    char a[]={'h','a','r','r','y'};
    cout<< &a <<endl;
    cout<< &a+1 <<endl;
    
    return 0;
}