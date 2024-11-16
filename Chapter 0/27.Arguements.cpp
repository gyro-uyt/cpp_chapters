#include <iostream>
using namespace std;

// Default arguments must be specified from right to left, anything which is defined in funtion is default arguement
float si(int currentMoney, float rate=1.04){         // all Default Arguements must be in Extreme-Right, like 'rate' here
return currentMoney*rate;                           // and Compulsory Arguements must be Left, like 'currentMoney' here
}

// Use const when the function is only meant to read the argument and not modify it.
// Helps avoid accidental modifications and ensures code safety.
void pi(const float pie = 3.14){    // Constant Arguements, fixes the value
    cout<< pie <<endl;             //* pie cannot be modified inside the function, but in main() it can be CHANGED
}

int main(){
    cout<<"Enter the amount of Money you want SI of: ";
    int money;
    cin>>money;
    cout<<"Your'e "<<money<<" will be "<< si(money) <<endl;
    cout<<"Iff Your'e a V.I.P. then Yours $"<<money<<" will be $"<< si(money, 1.1) <<endl;  // giving '1.1' here re-defines the value of float here
                                                                                 // if, none is given Default value is used
    pi();
    pi(3);  // ---> CHNAGES
    return 0; 
}