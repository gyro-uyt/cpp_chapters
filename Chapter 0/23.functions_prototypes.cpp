#include <iostream>
using namespace std;
// "__()" -------> tells the compiler '__' is a function
//*** Function Prototypes ***//
// type function-name (arguements)
// int sum(int a, int b); ---> Allowed // this is prototyping, normally this code won't RUN as sum() is defined after main(),
// int sum(int a, b);   ----> Not acceptable
int sum(int, int);  // ----> Allowed, as, (a,b) are not actual values
// but by Prototyping it assures the compiler that this Function would be there in the code search it
// now, the code will RUN
void greet(void); // ---> Acceptable
// void greet();    ---> Acceptable

int main(){         // when the code is run, compiler will run "main" FIRST
    int num1, num2;
    cout<<"Enter the num1: ";
    cin>>num1;
    cout<<"Enter the num2: ";
    cin>>num2;
//* here, num1 and num2 are ACTUAL Parameters.

    cout<<"The sum of above 2 numbers is: "<< sum(num1, num2) <<endl;
    greet();
    return 0;       // return 0 means program has RUN succussfully without any errors
}

int sum(int a, int b){
//* FORMAL Parameters here 'a' and 'b' will be taking values form Actual Parameters num1 and num2
    int c = a + b;
    return c;
}

void greet(){
    cout<<"\nHey fellas, BeastBoy here\n";
} 