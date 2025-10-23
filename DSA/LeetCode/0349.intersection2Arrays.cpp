#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
  // Two-Pointer Method, TC: O(nlogn+mlogm) SC: O(1)
  vector<int> intersection3(vector<int> &nums1, vector<int> &nums2) {
    sort(nums1.begin(), nums1.end());
    sort(nums2.begin(), nums2.end());

    int i = 0, j = 0;
    vector<int> ans;

    while (i < nums1.size() && j < nums2.size()) {
      if (nums1[i] == nums2[j]) {
        if (ans.empty() || ans.back() != nums1[i])
          ans.push_back(nums1[i]);
        i++;
        j++;
      } else if (nums1[i] < nums2[j])
        i++;
      else
        j++;
    }

    return ans;
  }

  // Sets Method, TC: O(n+m) SC: O(n+m)
  vector<int> intersection2(vector<int> &nums1, vector<int> &nums2) {
    unordered_set<int> s1(nums1.begin(), nums1.end());
    unordered_set<int> ans;

    for (int num : nums2) {
      if (s1.count(num))
        ans.insert(num);
    }

    return vector<int>(ans.begin(), ans.end());
  }

  // Brute Force method, TC: O(nxm) SC: O(n+m)
  vector<int> intersection1(vector<int> &nums1, vector<int> &nums2) {
    vector<int> nums3;
    for (auto i : nums1)
      for (auto j : nums2)
        if (i == j)
          nums3.push_back(i);

    unordered_map<int, int> store;
    for (auto i : nums3)
      store[i]++;

    vector<int> ans;
    for (auto i : store)
      ans.push_back(i.first);

    return ans;
  }
};
