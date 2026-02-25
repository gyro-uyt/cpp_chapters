#include <algorithm>
#include <bits/stdc++.h>
#include <unordered_map>
#include <vector>
using namespace std;

class Solution {
public:
  vector<int> bruteForce(vector<int> &nums, int target) {
    int n = nums.size();
    for (int i = 0; i < n; i++) {
      for (int j = 0; j < n; j++) {
        if (i == j)
          continue;
        if (nums[i] + nums[j] == target)
          return {i, j};
      }
    }
    return {-1, -1};
  }
  vector<int> bruteForceBetter(vector<int> &nums, int target) {
    int n = nums.size();
    for (int i = 0; i < n; i++)
      for (int j = i + 1; j < n; j++)
        if (nums[i] + nums[j] == target)
          return {i, j};

    return {-1, -1};
  }
  vector<int> optimal(vector<int> &nums, int target) {
    unordered_map<int, int> store;
    for (int i = 0; i < nums.size(); i++) {
      int rem = target - nums[i];
      if (store.find(rem) != store.end()) {
        return {i, store[rem]};
      }
      store[nums[i]] = i;
    }
    return {-1, -1};
  }
  // WRONG: As after sorting the original indices changes, CORRECT & Optimal if Problem is of Yes/No
  // vector<int> better(vector<int> &nums, int target) {
  //   sort(nums.begin(), nums.end());
  //   int n = nums.size();
  //   int i = 0, j = n - 1;
  //   int sum = 0;
  //   while (i < j) {
  //     sum = nums[i] + nums[j];
  //     if (sum == target)
  //       return {i, j};
  //     else if (sum < target)
  //       i++;
  //     else
  //       j++;
  //   }
  //   return {-1, -1};
  // }
};

class Solution0 {
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
};
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

int main() {
  int target = 6;
  vector<int> vec = {1, 4, 4, 2, 44, 53};
  vector<int> solution;

  Solution0 s1;
  solution = s1.twoSum(vec, target);
  for (int i = 0; i < solution.size(); i++) {
    cout << solution[i];
    if (i != (solution.size() - 1)) {
      cout << ", ";
    }
  }
  cout << endl;

  return 0;
}
