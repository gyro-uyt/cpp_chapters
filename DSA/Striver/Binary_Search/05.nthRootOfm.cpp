#include <bits/stdc++.h>
using namespace std;

class Solution {
  int midRaiseToN(int mid, int n, int m) {
    // we need to to find mid^n but doing so for larger no.s
    // may overflow, but we don't need to find exact value
    // We can find it till it reaches value of 'm' bcz a no.
    // greater than that cannot be our answer

    long long ans = 1;
    for (int i = 1; i <= n; i++) {
      ans *= mid;
      if (ans > m)
        return 2; // ans > m, search left
    }
    if (ans == m)
      return 1; // ans == m, our answer
    return 0;   // ans < m, search right
  }
  int NthRoot(int n, int m) {
    int low = 1, high = m;
    while (low <= high) {
      int mid = low + (high - low) / 2;
      int status = midRaiseToN(mid, n, m);
      if (status == 1)
        return mid;
      else if (status == 0)
        low = mid + 1;
      else
        high = mid - 1;
    }
    return -1;
  }
};
