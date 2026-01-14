#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
  vector<int> twoSum(vector<int> &nums, int target) {
    for (int i = 0; i < nums.size(); i++) {
      for (int j = 0; j < nums.size(); j++) {
        if (i != j && nums[i] + nums[j] == target) {
          return {i, j};
        }
      }
    }
    return {};
  }
  class Solution1 {
  public:
    vector<int> twoSum(vector<int> &nums, int target) {
      unordered_map<int, int> numToIndex;
      for (int i = 0; i < nums.size(); i++) {
        int complement = target - nums[i];
        if (numToIndex.find(complement) != numToIndex.end()) {
          return {numToIndex[complement], i};
        }
        numToIndex[nums[i]] = i;
      }
      return {};
    }
  };
};

int main() {
  int target = 6;
  vector<int> vec = {1, 4, 4, 2, 44, 53};
  vector<int> soln;

  Solution s1;
  soln = s1.twoSum(vec, target);
  for (int i = 0; i < soln.size(); i++) {
    cout << soln[i];
    if (i != (soln.size() - 1)) {
      cout << ", ";
    }
  }
  cout << endl;

  return 0;
}
