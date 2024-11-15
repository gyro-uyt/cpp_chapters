#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the no. of times you want '*' to print: ";
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        cout<<"* ";
    }
    cout<<endl;
    return 0;
}