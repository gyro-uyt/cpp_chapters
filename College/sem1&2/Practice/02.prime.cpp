#include <iostream>
using namespace std;

int main(){
    int n,i,p;
    cout<<"Enter the number to be verified as Prime or Not"<<endl;
    cin>>n;

    for (int i = 2; i < n; i++)
    {
       p = n % i ;
       if (p==0)
       {
            break;
       }      
    }

    if (p==0)
    {
        cout<<"You'r number is not Prime, it's a Composite Number."<<endl;
    }
    else{
        cout<<"The number is Prime"<<endl;
    }
    
    return 0;
}