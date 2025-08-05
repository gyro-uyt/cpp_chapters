#include <iostream>
using namespace std;

int main(){
    int a,b,c,k,n,p,l ;
    cout << "Enter the Value of a,b,c,n,p,l" <<endl;
    cin >> a >> b >> c >> n >> p >> l ;
    k = c / (a+b)*n%p-1;
    cout<<"The value of 'k' is: "<< k <<endl;
    
    return 0;
}