#include <bits/stdc++.h>
#include <vector>
using namespace std;

class Solution {
public:
  vector<vector<int>> ans;

  void solve(int i, vector<int> &nums, vector<int> &temp) {
    if (i >= nums.size()) {
      ans.push_back(temp);
      return;
    }

    temp.push_back(nums[i]); // take ith element
    solve(i + 1, nums, temp);
    temp.pop_back(); // not taking ith element
    solve(i + 1, nums, temp);
  }

  vector<vector<int>> subsets(vector<int> &nums) {
    vector<int> temp; // store subsets
    solve(0, nums, temp);
    return ans;
  }
};
