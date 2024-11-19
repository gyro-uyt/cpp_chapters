#include <iostream>
using namespace std;

int product(int a, int b){
    static int c = 0;           // static made this LINE to be USED only ONCE, next time this function is called this line is Ignored
    c = c + 1;          // therefore, for the next recall the value of 'c' is Retained and used there and then that is retained
    return a*b+c;       // somewhat is like loops                 
}

int main(){
    int x,y;
    cout<<"x = ";
    cin>>x;
    cout<<"y = ";
    cin>>y;
    cout<<"The Product of "<<x<<" and "<<y<<" is: "<< product(x,y) <<endl;
    cout<<"The Product of "<<x<<" and "<<y<<" is: "<< product(x,y) <<endl;
    cout<<"The Product of "<<x<<" and "<<y<<" is: "<< product(x,y) <<endl;
    cout<<"The Product of "<<x<<" and "<<y<<" is: "<< product(x,y) <<endl;
    cout<<"The Product of "<<x<<" and "<<y<<" is: "<< product(x,y) <<endl;
    cout<<"The Product of "<<x<<" and "<<y<<" is: "<< product(x,y) <<endl;
    cout<<"The Product of "<<x<<" and "<<y<<" is: "<< product(x,y) <<endl;
    return 0;
}