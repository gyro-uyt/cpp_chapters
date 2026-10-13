#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
  bool optimal(int n) {
    if (n <= 0)
      return false;
    return (n & (n - 1)) == 0;
  }
  bool better(int n) {
    if (n <= 0)
      return false;
    while (n > 1) {
      if (n % 2 == 1)
        return false;
      n = n / 2;
    }
    return true;
  }
  bool brute(int n) {
    if (n == 1)
      return true;
    if (n <= 0 || n % 2 != 0)
      return false;

    return brute(n / 2);
  }
};
