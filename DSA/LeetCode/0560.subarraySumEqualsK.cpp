#include <bits/stdc++.h>
#include <vector>
using namespace std;

class Solution {
public:
  int bruteForce(vector<int> &arr, int k) {
    int n = arr.size();
    int count = 0;
    for (int i = 0; i < n; i++)
      for (int j = i; j < n; j++) {
        int sum = 0;
        for (int m = i; m <= j; m++)
          sum += arr[m];
        if (sum == k)
          count++;
      }
    return count;
  }
  int better(vector<int> &nums, int k) {
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
    int ans = 0;
    int n = nums.size();

    return ans;
  }
};
