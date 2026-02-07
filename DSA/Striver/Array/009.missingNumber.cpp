#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
  int optimal(vector<int> &arr) {
    int xorActual = 0;
    int xorExpected = 0;
    for (int i : arr)
      xorActual ^= i;
    for (int i = 1; i <= arr.size() + 1; i++)
      xorExpected ^= i;
    return xorActual ^ xorExpected;
  }
  int better(vector<int> &arr) {
    int actualSum = 0;
    for (int i : arr)
      actualSum += i;
    int N = arr.size() + 1;
    int expectedSum = (N * (N + 1)) / 2;
    return expectedSum - actualSum;
  }
  int bruteForce(vector<int> &a, int N) {
    sort(a.begin(), a.end());
    for (int i = 1; i <= N; i++)
      if (a[i - 1] != i)
        return i;
    return -1;
  }
};
