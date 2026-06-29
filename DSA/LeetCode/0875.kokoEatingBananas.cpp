#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
  long long findT(vector<int> &piles, int k) {
    long long t = 0;
    for (long long i : piles) {
      t += i / k;
      if (i % k)
        t++;
    }

    return t;
  }
  int minEatingSpeed(vector<int> &piles, int h) {
    int maxE = INT_MIN;
    for (int i : piles)
      maxE = max(maxE, i);
    int low = 1, high = maxE;
    while (low <= high) {
      int mid = low + (high - low) / 2;
      long long t = findT(piles, mid);

      if (t <= h)
        high = mid - 1;
      else if (t > h)
        low = mid + 1;
    }
    return low;
  }
};
