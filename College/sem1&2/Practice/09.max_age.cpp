#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int n,m;
    cout<<"Enter the Number of students: "<<endl;
    cin>> n;

    long age[n]={};
    for (int a = 0; a < n ; a++)
    {
        cout<<"Enter the Age of student"<<(a+1)<<": "<<endl;
        cin>>age[a];
    }
    
    cout << "The Ages of Students are: ";
    for (int i = 0; i < n; i++) {
        cout << age[i] << " ";
    }
    
    cout<<endl;
    return 0;
}