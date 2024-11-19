#include <iostream>
using namespace std;

int fibseries(int p){
    if( p<2 ){
        return 0;
    }
    if( p<4 && p>1 ){
        return 1;
    }
    return fibseries(p-1) + fibseries(p-2);
}

// int factorial(int n){
//     return n*factorial(n-1);      ---> this WON'T STOP, it'll keep on returning
// }
int factorial(int n){
    if (n <= 1)
    {
        return 1;
    }
    return n*factorial(n-1);
}
// This what happens above:
// Step by step calculation of factorial(4)
// factorial(4) = 4 * factorial(3); 
// factorial(4) = 4 * 3 * factorial(2);
// factorial(4) = 4 * 3 * 2 * factorial(1);
// factorial(4) = 4 * 3 * 2 * 1;
// factorial(4) = 24;

int main(){
    int x;
    cout<<"Enter the no. you want Factorial of: ";
    cin>>x;
    cout<< x <<"! = "<< factorial(x) <<endl;
    
    int y;
    cout<<"Enter the nth term of Fibuciano Series you want to find of: ";
    cin>>y;
    cout<<"The "<<y<<"th term of the Fibuciano Series is: "<< fibseries(y) <<endl;
    return 0;
}