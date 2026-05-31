#include <bits/stdc++.h>
#include <vector>
using namespace std;

class Solution {
public:
  vector<int> bruteForce(vector<int> &nums) {
    vector<int> pos;
    vector<int> neg;
    int n = nums.size();
    for (int i = 0; i < n; i++) {
      if (nums[i] > 0)
        pos.push_back(nums[i]);
      else
        neg.push_back(nums[i]);
    }
    for (int i = 0; i < n / 2; i++) {
      nums[2 * i] = pos[i];
      nums[2 * i + 1] = neg[i];
    }
    return nums;
  }
  // bruteForce took TC: O(2n) SC: O(n)
  // In optimal aim is to reduce TC from 2n to 1n not on SC as that is already
  // at best
  vector<int> optimal(vector<int> &nums) {
    int n = nums.size();
    vector<int> ans(n, 0);
    int pos = 0, neg = 1;
    for (int i = 0; i < n; i++) {
      if (nums[i] < 0) {
        ans[pos] = nums[i];
        pos += 2;
      } else {
        ans[neg] = nums[i];
        neg += 2;
      }
    }
    return ans;
  }
};
