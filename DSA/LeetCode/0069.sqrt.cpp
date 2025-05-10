#include <iostream>
using namespace std;

class Solution {
  public:
    int mySqrt(int x) {

        int i = 1;
        while(i <= x / i) {
            i++;
        }
        return i - 1;
    }
};

int main() {

    Solution s1;
    cout << s1.mySqrt(8) << endl;

    cout << s1.mySqrt(21474836) << endl;

    return 0;
}



/*
Given a non-negative integer x, return the square root of x rounded down to the nearest integer.
The returned integer should be non-negative as well.

You must not use any built-in exponent function or operator.
    For example, do not use pow(x, 0.5) in c++ or x ** 0.5 in python.
*/