#include <iostream>
using namespace std;

union money
{
    /* data */
    int rice; //4
    char car; //1
    float pounds; //4
};

int main(){
        union money m1;
        m1.rice = 34;
        cout<<m1.rice<<endl;    // Correct
        m1.car= 'c';
        cout<<m1.rice<<endl;    // GARBAGE value, only one acceptable
        cout<<m1.car<<endl;     // Correct
        return 0;
}