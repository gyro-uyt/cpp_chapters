#include <iostream>
using namespace std;

int main(){
    int n,a ;
    cout<<"Enter no. of lines: "<<endl;
    cin>>n;
    
    for (int i = 1; i <= n; i++)
    {
         for (int m = 1; m <= i; m++)
            {
                cout<<"*";
            }
         cout<<endl;
    }
    return 0;
}