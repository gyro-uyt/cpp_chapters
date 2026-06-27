#include <bits/stdc++.h>
using namespace std;

class Solution {
  int floorSqrt(int n) {
    if (n <= 1)
      return n;
    int low = 1, high = n / 2;

    while (low <= high) {
      long long mid = low + (high - low) / 2;
      long long sq = mid * mid;
      if (sq <= n)
        low = mid + 1;
      else
        high = mid - 1;
    }
    return high;
  }
};
