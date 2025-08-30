/*
Given a non-negative integer x, return the square root of x rounded down to the
nearest integer. The returned integer should be non-negative as well.

You must not use any built-in exponent function or operator.
    For example, do not use pow(x, 0.5) in c++ or x ** 0.5 in python.
*/

#include <iostream>
using namespace std;

class Solution {
public:
  long long int mySqrt(int x) {
    // Approach-2
    // Binary search
    if (x == 0) {
      return x;
    }
    int s = 1, e = x;
    long long int ans = -1;
    while (s <= e) {
      long long int mid = s + (e - s) / 2;
      long long int square = mid * mid;
      if (square == x) {
        return mid;
      } else if (square < x) {
        ans = mid;
        s = mid + 1;
      } else {
        e = mid - 1;
      }
    }
    return ans;
  }
};

int main() {

  Solution s1;
  cout << s1.mySqrt(234) << endl;

  return 0;
}
/*
Approach-1
Linear search, TC O(root n) > O(log n)
  int i = 1;
  while (i <= x / i) {
    // Why x / i? Because instead of checking i * i <= x (which could
    overflow
    // for large i), we check i <= x / i.
    i++;
  }
  return i - 1;
Approach-3, fastest
Newton’s Method (a.k.a. Newton–Raphson)
  The idea: solve the equation
    f(y)=y2−x=0
  for y = sqrt(x).
  Newton’s iteration formula:
    ynext=(y+x/y)/2

  Implementation -
    int mySqrt(int x) {
        if (x == 0) return 0;
        long long y = x;  // start with y = x (a rough guess)
        while (y * y > x) {
            y = (y + x / y) / 2;  // Newton iteration
        }
        return (int)y;
    }
*/