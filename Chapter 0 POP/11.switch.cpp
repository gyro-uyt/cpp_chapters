#include <iostream>
using namespace std;
int main(){
    int age;
// *********** SWITCH CASE statements ********
    
    cout<<"Enter your age: "<<endl;
    cin>>age;

    switch (age){
        case 18:
            cout<<"Welcome FRESHERS"<<endl<<endl;
            break;

        case 22:
            cout<<"20th Centuary Boys assemble here"<<endl<<endl;
            break;

        case 50:
            cout<<"Half a Centuary Old"<<endl<<endl;
            break;

        case 0:
            cout<<"Toddler, huh"<<endl<<endl;
            break;

        default:
            cout<<"In ur Dreans"<<endl<<endl;
            break;

    }
    
    cout<<"General TEXTS here"<<endl;
    return 0;
}
