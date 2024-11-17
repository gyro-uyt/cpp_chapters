#include <iostream>
using namespace std;

int main(){
    long i,n,p=1;
    cout<<"Enter the number you want factorial of:";
    cin>>n;
    cout<<endl;
    for (int i = 1; i <= n; i++)
    {    
      p=p*i;
    }
    
    cout<<"Factorial of "<<n<<" is: "<<p<<endl;

    return 0;
}
