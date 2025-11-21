#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
  // Iteration with DP
  int climbStairs0(int n) {
    if (n == 0)
      return 1; // 1 way to stay at ground
    if (n == 1)
      return 1; // 1 way to climb 1 step
    if (n == 2)
      return 2; // 2 ways to climb 2 steps

    int prev1 = 2; // Represents climbStairs(i-1)
    int prev2 = 1; // Represents climbStairs(i-2)
    int current = 0;

    for (int i = 3; i <= n; i++) {
      current = prev1 + prev2;
      prev2 = prev1;
      prev1 = current;
    }

    return current;
  }

  // Recursion Solution with DP
  int climbStairs(int n) {
    if (n < 0)
      return 0;
    if (n == 0)
      return 1;
    vector<int> store(n + 1, -1);
    store[0] = 1;

    return solve(n, store);
  }
  int solve(int n, vector<int> &store) {
    if (n < 0)
      return 0;
    if (store[n] != -1)
      return store[n];

    return store[n] = solve(n - 1, store) + solve(n - 2, store);
  }
};
