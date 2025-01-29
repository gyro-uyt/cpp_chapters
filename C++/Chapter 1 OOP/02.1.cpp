#include <iostream>
// #include <math.h>
#include <cmath>    // include log10()
#include <string>
using namespace std;

class binary
{
    long b; // by Default ALL the Functions in 'class' are PRIVATE, mean can only be used by function of this 'class'
    
    public:
        void input_binary(void);
        void chk_binary(void);

};

void binary :: input_binary(void){
    cout<<"Enter a binary number: ";
    cin>> b;
}

void binary :: chk_binary(void){
    // int dig1 = b % 10;
    // b = b/10;
    // int dig2 = b % 10;
    int lgth = (log10(b) + 1);    // calculates lenght of the number
    // cout<< lgth <<endl;
    int digits[lgth]={};        // made array of the lenght of number, to store digits of number
    for (int i = 0; i < lgth; i++)
    {
        digits[i] = b % 10;
        cout<< digits[i] <<endl;
        b = b/10;
    }
    
    // if ( digits[] == 0 || digits[] == 1)
    // {
    //     cout<< "Entered number is Binary" <<endl;
    // }
    // else{
    //     cout<< "Please, Enter a Binary number" <<endl;
    // }
    bool is_binary = true;
    for (int i = 0; i < lgth; i++)
    {
        if (digits[i] != 0 && digits[i] != 1)
        {
            cout<< "Please, Enter a Binary number" <<endl;
            is_binary = false;
            break;
        }
        else{
            cout<< "Entered number is Binary" <<endl;
        }
    }
    
    

}


int main(){
    binary x;
    x.input_binary();
    x.chk_binary();

    return 0;
}