#include <iostream>
using namespace std;

int main(){
    int ages[]={5,76,36,45,18};
    cout<<"\nJust writing the NAME of arrays ('ages') will give address: "<< ages <<endl;
    int*p= ages;

    cout<<"\nOutput given by 'p' is: "<< p <<endl;      // just 'p' is 1st value of array
    cout<<"Output given by 'p+1' is: "<< p+1 <<endl;
    cout<<"Output given by 'p+2' is: "<< p+2 <<endl;
    cout<<"Output given by 'p+3' is: "<< p+3 <<endl;
    cout<<"Output given by 'p+4' is: "<< p+4 <<endl;

    cout<<"\nValue at 'p' given by '*p' is: "<< *p <<endl;
    cout<<"Value at '(p+1)' given by '*(p+1)' is: "<< *(p+1) <<endl;
    cout<<"Value at '(p+2)' given by '*(p+2)' is: "<< *(p+2) <<endl;
    cout<<"Value at '(p+3)' given by '*(p+3)' is: "<< *(p+3) <<endl;
    cout<<"Value at '(p+4)' given by '*(p+4)' is: "<< *(p+4) <<endl<<endl;

    // value of Arrays can also be printed like this,
    cout<< *p <<endl;       // printed value of 'p'(p+0) == 5,
    cout<< *(p++) <<endl;   // prints '5' only as value of p increments AFTER,
    cout<< *p <<endl;       // print the incremented 'p' i.e., 'p+1' == 76,
    cout<< *(++p) <<endl;   // prints the next incremented as it is pre-inc. i.e., 'p+2' = 36

    return 0;
}