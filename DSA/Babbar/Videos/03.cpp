#include <iostream>
using namespace std;

int main() {
// Logical Operators
    int a = 1;  // 001
    int b = 5;  // 101

    cout << "a|b : " << (a | b) << endl // 101 => 5
         << "a&b : " << (a & b) << endl // 001 => 1
         << "a^b : " << (a ^ b) << endl // 100 => 4
         << "~a  : " << (~a) << endl; // 110 => 1,10 => -2

// Bitwise Operators
    // left shift => number gets 2x for left shift with 1
    int p = 3 << 1; // shifts all the bits by 1 unit place to the left, 011(3) => 110(6)
    cout << "p: " << p << endl;

    // Right shift => number gets /2 for right shift with 1
    int q = 4 >> 1; // shifts all the bits by 1 unit place to the right, 100(4) => 010(2)
    cout << "q: " << q << endl;

    /*
    Note:
        1. right/left shift with large number may result ambigous as doing shift may turn the
           MSB to 1 making the number negative.
        2. in case of '+' numbers the padding is of Zero's for these shift, meaining
           the bits added at starting or ending in these shifts are all 0s.
        3. in case of '-' numbers padding depends on the Compiler.
    */

// for loop
    /*
    for(initialiser; condition; updation) {
        body
    }
    NOTE: in for loop only writing the separating ';' are necessary!
    hence, even this is legel for(;;){} as conditions are met

    flow
        -> initilisation (once only)
        -> condition -> body -> upadtion (repeat, till condition is false)
    */
    // m-1
    for(int i = 0; i < 5; i++) {
        cout << (i + 1) << " ";
    }
    cout << endl;
    // m-2
    int j = 0;
    for(; j < 5; j++) {
        cout << (j + 1) << " ";
    }
    cout << endl;
    // m-3
    int k = 0;
    for(; k < 5;) {
        cout << (k + 1) << " ";
        k++;
    }
    cout << endl;
    // m-4
    int m = 0;
    for(;;) {
        if(m < 5) {
            cout << (m + 1) << " ";
            m++;
        } else
            break;
    }
    cout << endl;

    return 0;
}