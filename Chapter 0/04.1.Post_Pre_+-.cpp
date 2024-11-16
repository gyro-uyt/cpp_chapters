// EXAMPLE to show difference btw. POST & PRE Increment/Decrement

#include<iostream>
using namespace std;
int main(){
     int a1=10,a2=10,m,n;
     cout<<"a1 = "<<a1<<endl;                        // a1 = 10                           
     cout<<"a2 = "<<a2<<endl;                        // a2 = 10

     cout<<"a1 new value = "<<(a1++ -5)*10 <<endl;   // a1 new value = 50     
     cout<<"a2 new value = "<<(++a2 -5)*10 <<endl;   // a2 new value = 60  

 // both 'a1' and 'a2' gone through same operations but the DIFF. came due to "a++" & "++a"

    return 0;
}
