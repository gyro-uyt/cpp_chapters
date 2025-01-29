#include<iostream>
using namespace std;
int main(){
    int x,i,p;
    cout<<"Enter the number you want Table of: ";
    cin>>x;
    i=1;
    while (i<=10)     // condition
    {
      p=x*i;
      cout<<p<<"\n";  /* code */
      ++i;
    }
    
    // cout<<"\n";
    return 0;
}
