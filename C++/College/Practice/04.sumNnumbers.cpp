#include <iostream>
using namespace std;

int main(){
    int i,n,p=0;
    cout<<"Enter the No. of Terms: " <<endl;
    cin>>n;    

    for (int i = 1; i <= n; i++)
    {
        p = (p + i);
    }
    cout<<"Sum of the First "<<n<<" natural numbers is: "<< p <<endl;

    return 0;
}
