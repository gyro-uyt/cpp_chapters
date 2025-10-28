#include <bits/stdc++.h>
#include <vector>
using namespace std;

class Solution {
public:
  // Recursion Method
  int fib1(int n) {
    if (n <= 1)
      return n;

    return fib1(n - 1) + fib1(n - 2);
  }
  // DP Method
  int fib2(int n) {
    if (n <= 1)
      return n;

    vector<int> store(n + 1, -1);
    store[0] = 0;
    store[1] = 1;
    for (int i = 2; i <= n; i++)
      store[i] = store[i - 1] + store[i - 2];

    return store[n];
  }
};
