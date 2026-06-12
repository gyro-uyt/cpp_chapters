#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
  vector<vector<int>> threeSum(vector<int> &nums) {
    sort(nums.begin(), nums.end());
    vector<vector<int>> result = {};
    for (int i = 0; i < nums.size(); i++) {
      if (i > 0)
        if (nums[i] == nums[i - 1])
          continue;

      int left = i + 1;
      int right = nums.size() - 1;
      while (left < right) {
        int sum = nums[i] + nums[left] + nums[right];
        if (sum == 0) {
          result.push_back({nums[i], nums[left], nums[right]});
          left++;
          right--;

          while (left < right && nums[left] == nums[left - 1])
            left++;
          while (left < right && nums[right] == nums[right + 1])
            right--;
        } else if (sum < 0)
          left++;
        else
          right--;
      }
    }
    return result;
  }
  vector<vector<int>> better(vector<int> &nums) {
    set<vector<int>> triplets;
    int n = nums.size();
    for (int i = 0; i < n - 1; i++) {
      set<int> store;
      for (int j = i + 1; j < n; j++) {
        int rem = -(nums[i] + nums[j]);
        if (store.find(rem) != store.end()) {
          vector<int> tmp = {nums[i], nums[j], rem};
          sort(tmp.begin(), tmp.end());
          triplets.insert(tmp);
        }
        store.insert(nums[j]);
      }
    }
    vector<vector<int>> ans(triplets.begin(), triplets.end());
    return ans;
  }
  vector<vector<int>> bruteForce(vector<int> &nums) {
    set<vector<int>> combn;
    int n = nums.size();
    for (int i = 0; i < n - 2; i++)
      for (int j = i + 1; j < n - 1; j++)
        for (int k = j + 1; k < n; k++)
          if (nums[i] + nums[j] + nums[k] == 0) {
            vector<int> tmp = {nums[i], nums[j], nums[k]};
            sort(tmp.begin(), tmp.end());
            combn.insert(tmp);
          }
    vector<vector<int>> ans(combn.begin(), combn.end());
    return ans;
  }
};

int main() {
  vector<int> vec = {-1, 0, 1, 2, -1, -4};

  vector<vector<int>> print;
  Solution s1;
  print = s1.threeSum(vec);
  for (int i = 0; i < print.size(); i++) {
    for (int j = 0; j < print.size(); j++) {
      cout << print[i][j] << " ";
    }
    cout << endl;
  }
  cout << endl;

  return 0;
}
