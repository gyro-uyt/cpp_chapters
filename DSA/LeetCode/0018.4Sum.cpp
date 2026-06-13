#include <algorithm>
#include <bits/stdc++.h>
#include <ctime>
#include <vector>
using namespace std;

class Solution {
public:
  vector<vector<int>> optimal(vector<int> &nums, int target) {
    int n = nums.size();
    sort(nums.begin(), nums.end());
    vector<vector<int>> ans;
    for (int i = 0; i < n; i++) {
      if (i > 0 && nums[i] == nums[i - 1])
        continue; // skip all the i's except the first
      for (int j = i + 1; j < n; j++) {
        if (j > i + 1 && nums[j] == nums[j - 1])
          continue; // skip all the j's except the first following the i
        int l = j + 1, r = n - 1;
        while (l < r) {
          long long sum = nums[i];
          sum += nums[j];
          sum += nums[l];
          sum += nums[r];
          if (sum == target) {
            ans.push_back({nums[i], nums[j], nums[l], nums[r]});
            l++;
            r--;
            while (l < r && nums[l] == nums[l - 1])
              l++;
            while (l < r && nums[r] == nums[r + 1])
              r--;
          } else if (sum < target)
            l++;
          else
            r--;
        }
      }
    }
    return ans;
  }
  vector<vector<int>> better(vector<int> &nums, int target) {
    int n = nums.size();
    set<vector<int>> triplets;
    for (int i = 0; i < n - 3; i++)
      for (int j = i + 1; j < n - 2; j++) {
        set<long long> store;
        for (int k = j + 1; k < n; k++) {
          long long rem = target - nums[i];
          rem -= nums[j];
          rem -= nums[k];
          if (store.find(rem) != store.end()) {
            vector<int> tmp = {nums[i], nums[j], nums[k], (int)rem};
            sort(tmp.begin(), tmp.end());
            triplets.insert(tmp);
          }
          store.insert(nums[k]);
        }
      }

    vector<vector<int>> ans(triplets.begin(), triplets.end());
    return ans;
  }
  vector<vector<int>> bruteForce(vector<int> &nums, int target) {
    int n = nums.size();
    set<vector<int>> store;
    for (int i = 0; i < n - 3; i++)
      for (int j = i + 1; j < n - 2; j++)
        for (int k = j + 1; k < n - 1; k++)
          for (int l = k + 1; l < n; l++) {
            long long sum = nums[i] + nums[j];
            sum += nums[k]; // needs to be done to prevent overflow
            sum += nums[l];
            if (sum == target) {
              vector<int> tmp = {nums[i], nums[j], nums[k], nums[l]};
              sort(tmp.begin(), tmp.end());
              store.insert(tmp);
            }
          }
    vector<vector<int>> ans(store.begin(), store.end());
    return ans;
  }
};
