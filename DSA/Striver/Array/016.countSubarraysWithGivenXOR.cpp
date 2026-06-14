#include <bits/stdc++.h>
#include <endian.h>
#include <sched.h>
#include <vector>
using namespace std;

class Solution {
public:
  int optimal(vector<int> &arr, int k) {
    int count = 0;
    int runningXOR = 0;
    map<int, int> store; // runningXOR, freq
    store[0] = 1;
    for (int i : arr) {
      runningXOR ^= i;
      int rem = runningXOR ^ k;
      count += store[rem];
      store[runningXOR]++;
    }
    return count;
  }
  int bruteForce(vector<int> &arr, int k) {
    int count = 0;
    int n = arr.size();
    for (int i = 0; i < n; i++) {
      int num = 0;
      for (int j = i; j < n; j++) {
        num ^= arr[j];
        if (num == k)
          count++;
      }
    }
    return count;
  }
};
