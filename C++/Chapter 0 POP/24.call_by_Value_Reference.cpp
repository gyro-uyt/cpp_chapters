#include <iostream>
using namespace std;
void swap(int, int);
void swapPointer(int *, int *);
void swapRefVar(int &, int &);

int main()
{
    int x = 4, y = 7;
    cout << "x=" << x << " and y=" << y << endl;
    swap(x, y);
    cout << "x=" << x << " and y=" << y << endl; // -----> DIDN'T SWAPPED, why??
    // bcz. when we use swap(x,y) the values of (x,y) gets copied to (a,b), so (a,b) value's changes not the (x,y)
    // swapPointer(&x, &y);        // ---> Works Perfectly
    swapRefVar(x, y); // ---> Also Wrks Perfectly
    cout << "x=" << x << " and y=" << y << endl;
    return 0;
}

//* this WON'T SWAP (x,y)
void swap(int a, int b)
{                 // temp   a   b
    int temp = a; // 4      4   5
    a = b;        // 4      5   5
    b = temp;     // 4      5   4
}

//* this WORKS PeRFECTLY
// This will swap 'a' and 'b' using Pointer reference
//* Call by Reference using Pointers
void swapPointer(int *a, int *b)
{                  // temp   a   b
    int temp = *a; // 4      4   5
    *a = *b;       // 4      5   5
    *b = temp;     // 4      5   4
}

// This will swap 'a' and 'b' using reference variables
//* Call by Reference using c++ Reference Variables
void swapRefVar(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

//* return by reference............
// int& swapRefVAr(int&a, int&b){
//     int temp = a;
//     a = b;
//     b = temp;
//     return a;
// }
// swapRefVar(x, y) = 766;      ---> this in main() function
// x = 766 and y = 4            ---> Output