#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
  int maxLength(vector<int> &arr) {
    map<int, int> store; // sum, index
    int maxLen = 0;
    int sum = 0;
    for (int i = 0; i < arr.size(); i++) {
      sum += arr[i];
      if (sum == 0)
        maxLen = i + 1;
      else {
        if (store.find(sum) != store.end())
          maxLen = max(maxLen, i - store[sum]);
        else
          store[sum] = i;
      }
    }
    return maxLen;
  }
  int better(vector<int> &arr) {
    int maxLen = 0;
    int n = arr.size();
    for (int i = 0; i < n; i++) {
      int sum = 0;
      for (int j = i; j < n; j++) {
        sum += arr[j];
        if (sum == 0)
          maxLen = max(maxLen, j - i + 1);
      }
    }
    return maxLen;
  }
  int bruteForce(vector<int> &arr) {
    int maxLen = 0;
    int n = arr.size();
    for (int i = 0; i < n; i++) {
      for (int j = i; j < n; j++) {
        int sum = 0;
        for (int k = i; k <= j; k++)
          sum += arr[k];
        if (sum == 0)
          maxLen = max(maxLen, j - i + 1);
      }
    }
    return maxLen;
  }
};
