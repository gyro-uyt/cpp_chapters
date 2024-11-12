#include<iostream>
using namespace std;
int main(){
  //   *******************************REFERENCE VARIABLES**********************************
  // Rohan ------> Monty -------> Bablu --------> CoderN,,, SAME person with Different NAMES  
    float x = 36;
    float & y = x;      // "&y" points the value of 'y' towards 'x', y = x

    cout<< x <<endl;
    cout<< y <<endl;        

  //   *******************************TYPE-CASTING**********************************
    int a=23; 
    float b=82.7;

    cout<<"The value of 'a' is "<< (float)a <<endl; // "(float)a" or "float(a)" funtions the SAME.
    cout<<"The value of 'a' is "<< float(a) <<endl;

    cout<<"The value of 'b' is "<< int(b) <<endl;   // conversts 'b' into INTEGER, similarly anything can be converted..
    cout<<"The value of 'b' is "<< (int)b <<endl;

    int c = int(b);       // 'c' takes the INTEGRAL value of 'b'
    cout<<"The value of 'c' is "<< c <<endl;

    cout<<"The Value of expression 'a+b' is "     << a+b      <<endl;
    cout<<"The Value of expression 'a+int(b)' is "<< a+int(b) <<endl;
    cout<<"The Value of expression 'a+(int)b' is "<< a+(int)b <<endl;

  // now we can CONVERT double to int, float to int, etc....

    return 0;
}