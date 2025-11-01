#include <bits/stdc++.h>
#include <vector>
using namespace std;

class Solution {
public:
  vector<int> buildArray(vector<int> &nums) {}
  vector<int> buildArray0(vector<int> &nums) {
    vector<int> ans(nums.size(), -1);

    for (int i = 0; i < ans.size(); i++)
      ans[i] = nums[nums[i]];

    return ans;
  }
};
