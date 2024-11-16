#include<iostream>
using namespace std;
int main(){

 // c++ takes 'DOUBLE' as the default for 'DECIMAL' numbers
    float a = 34.5f ;
     // To represent a Number as FLOAT "f" or "F" is written at last
    long double b = 34.5l ;
     // To represent a Number as LONG DOUBLE "l" or "L" is used
    
   cout<<"The size of '34.5'  is "<< sizeof(34.5)  <<endl;   // 34.5  is double
   cout<<"The size of '34.5f' is "<< sizeof(34.5f) <<endl;   // 34.5f is float
   cout<<"The size of '34.5F' is "<< sizeof(34.5F) <<endl;   // 34.5F is float
   cout<<"The size of '34.5l' is "<< sizeof(34.5l) <<endl;   // 34.5l is long double
   cout<<"The size of '34.5L' is "<< sizeof(34.5L) <<endl;   // 34.5L is long double

    return 0;
}