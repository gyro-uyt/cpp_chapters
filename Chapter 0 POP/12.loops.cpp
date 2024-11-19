#include <iostream>
using namespace std;
int main(){

    int a,n;
    a=10;
    cout<< a <<endl;                     // prints 'a' as 10
    a++;                                // increases 'a' by 1
    cout<< a <<endl;                   // INCREASED value gets Print
    a++;                              // now REPEATS the process
    cout<< a <<endl;                 // again increases by 1 and prints
    a++;                            // .
    cout<< a <<endl;               // .
    a++;                          // .
    cout<< a <<endl;             // .
    a++;                        // This is how numebrs can be printed 
    cout<< a <<endl<<endl;;    // now for this we have functions of LOOPS

    //**********There 3 loops in c+++ *********//
    // 'for' loop, 'while' loop, 'do while' loop
    
    //******** FOR LOOP *******//
    cout<<"This is FOR loop"<<endl;
    for (int n = 0; n <= 10; n++)    // for ( initialisation; condition; updation)
    {
        cout<< n <<endl;              // keeps on printing this until FALSE
    }      // from here goes to for again 

    // INFINITE loop
    // for (int p = 1; 1<=2; p++)   ,, here the condition 1<=2 is always TRUE hence the loop goes on.....
    // {
    //     cout<< p <<endl;
    // }

    //******** WHILE-LOOP **********//
    cout<<"\nThis is While loop"<<endl;
    int x=100;              // initialisation
    while (x<=120)          // condition
    {
        cout<< x <<endl;
        x++;                // updation
    }
    
    // Infinite loop
    // int y=1;
    // while(true)     // true is true always true, hence repeats infinitely
    // {
    //     cout<< y <<endl;
    //     y++;
    // }
    
    //******** DO-WHILE LOOP *******//
    cout<<"This is do-while loop & is different from others"<<endl;
    int s=5;
    do              // the speciality of this code is,,
    {               // First condition always RUNS, i.e., Initialiser
        cout<< s <<endl;
        s++;
    } while (s<=15);

    return 0;
}
