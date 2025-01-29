#include <iostream>
using namespace std;
int main(){
    int age;
    cout<<"Tell your age: "<<endl;
    cin>>age;
// ************* IF ELSE IF ladder ************
    if( age == 22){
        cout<<"We're the 20th Centuary Boys"<<endl;
    }
    else if( age == 50){
        cout<<"Welcome to the Half Centuary Boys"<<endl;
    }
  // YES we can use multiple else if statements 
  // else if acts like 'OR'
    else if( age == 18){
        cout<<"wait are you the New Buddies, Party's all yours"<<endl;
    }
    else if ( age < 0){
        cout<<"Nice Try, but First be Born DEVIL"<<endl;
    }
    else if (age > 18){
        cout<<"Welcom to the Party buddy"<<endl;
    }
    // else is like IF NONE OF THE ABOVE
    else{
        cout<<"Wait for ur DAYZZ budss"<<endl;
    }

    return 0;
}
