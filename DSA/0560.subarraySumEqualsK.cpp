#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;

class Solution {
public:
  int bruteForce(vector<int> &nums, int k) {
    int ans = 0;
    int n = nums.size();
    for (int i = 0; i < n; i++) {
      int sum = 0;
      for (int j = i; j < n; j++) {
        sum += nums[j];
        if (sum == k)
          ans++;
      }
    }
    return ans;
  }
  int optimal(vector<int> &nums, int k) {
    unordered_map<int, int> mpp;
    mpp[0] = 1;
    int prefixSum = 0;
    int count = 0;
    for (int i = 0; i < nums.size(); i++) {
      prefixSum += nums[i];
      int remSum = prefixSum - k;
      count += mpp[remSum];
      mpp[prefixSum] += 1;
    }
    return count;
  }
};
