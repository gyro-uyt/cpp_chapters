#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Tell no. of lines to print:"<<endl;
    cin>>n;
    cout<<"You're "<<n<<" lines Palindrome pattern is: "<<endl;
    for (int i = 1; i <= n; i++)
    {   
        int p=1;
        while ( p <= i)
        {
            cout << p <<" ";
            p++;
        }    
        int q=(p-1);    
        while ( q> 1)
        {
            q--;
            cout<< q <<" ";
        }
        
        cout<<endl;
    }
    
    return 0;
}