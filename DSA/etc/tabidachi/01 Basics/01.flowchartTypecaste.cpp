/*
01: Intro to Programming & Flowcharts

FLowchart
    __________
   (__________)     --> start/end (terminator)
    __________
   /_________/      --> Input/ Output
    __________
   |_________|      --> process

      /\
     /  \
    /    \          --> Decision making
    \   /
     \/

     ----->         --> arrows
     <-----

     ()             --> connector

Pseudocode
    generic way of representing code

*/
#include <iostream>
using namespace std;

int main() {

    int a = 'c';
    cout << "ascii: " << a << endl;

    char ch = 98;
    cout << "char: " << ch << endl;

    char cnh = 123456;
    cout << "char: " << cnh << endl;
    // char can only store 256 values, the actual value stored is:
    //     123456 % 256 = 64 ascii => @
    // Why % 256? Because 256 = 2⁸ (8 bits), so anything bigger wraps around every 256 steps — like a clock

    int n = -69;
    cout << "ascii: " << n << endl;

    unsigned int d = 3;
    cout << "int: " << d << endl;

    unsigned int e = -3;    // print Huge number bcz. -3 gets converted to a large positive value in unsigned int using two's complement representation
    cout << "int: " << e << endl;

    int x = 2;
    int y = 3;

    bool test1 = (x == y);
    cout << "bool: " << test1 << endl;

    int p = 5;
    cout << "!not: " << !p << endl;

    return 0;
}