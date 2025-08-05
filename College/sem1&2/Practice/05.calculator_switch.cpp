#include <iostream>
using namespace std;

int main(){
    int num1, num2;
    char operation;
    bool c=false;
    
    cout<<"Enter the First number: "<<endl;
    cin>>num1;
    cout<<"Enter the Second number: "<<endl;
    cin>>num2;

    
    while (!c)
    {       
        cout<<"Choose the Operation you want(+,-,*,/): "<<endl;
        cin>>operation;

        switch (operation)
        {
         case '+':
            cout<<"Addition of the 2 no.s is: "<< num1+num2 <<endl;
            c=true;
            break;
         case '-':
            cout<<"Subtraction of the 2 no.s is: "<< num1-num2 <<endl;
            c=true;
            break;
         case '*':
            cout<<"Multiplication of the 2 no.s is: "<< num1 * num2 <<endl;
            c=true;
            break;
         case '/':
            cout<<"Division of the Two no.s is: "<< num1 / num2 <<endl;
            c=true;
            break;

         default:
            cout<<"Please Choose correct Operator!!"<<endl;
            continue;
        }
    }
    return 0;
}