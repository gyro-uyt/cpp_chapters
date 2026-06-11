#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
  // TC: O(n), SC: O(1)
  vector<int> optimal(vector<int> &nums) {
    int n = nums.size();
    int e1 = INT_MIN, e2 = INT_MIN;
    int cnt1 = 0, cnt2 = 0;
    for (int i = 0; i < n; i++) {
      if (cnt1 == 0 && nums[i] != e2) {
        e1 = nums[i];
        cnt1 = 1;
      } else if (cnt2 == 0 && nums[i] != e1) {
        e2 = nums[i];
        cnt2 = 1;
      } else if (nums[i] == e1)
        cnt1++;
      else if (nums[i] == e2)
        cnt2++;
      else {
        cnt1--;
        cnt2--;
      }
    }
    // As this is not a gaurentee that majority element will be present, so we
    // need to check whether the elements we found are majority
    cnt1 = 0, cnt2 = 0;
    for (int i : nums) {
      if (i == e1)
        cnt1++;
      if (i == e2)
        cnt2++;
    }
    vector<int> ans;
    int cndn = n / 3 + 1;
    if (cnt1 >= cndn)
      ans.push_back(e1);
    if (cnt2 >= cndn)
      ans.push_back(e2);
    sort(ans.begin(), ans.end());
    return ans;
  }

  // TC: O(n), SC: O(n)
  vector<int> better(vector<int> &nums) {
    vector<int> ans;
    unordered_map<int, int> freq;
    int condn = nums.size() / 3;
    for (int i : nums) {
      freq[i]++;
      // For a number to be an answer (> n/3), The first moment this becomes
      // true is when "freq = n/3 + 1" adds the number exactly Once.
      if (freq[i] == condn + 1)
        ans.push_back(i);
      if (ans.size() == 2)
        break;
    }
    return ans;
  }
  // TC: O(n2), SC: O(1)
  vector<int> bruteForce(vector<int> &nums) {
    vector<int> ans;
    int n = nums.size();
    int condn = n / 3;
    for (int i = 0; i < n; i++) {
      if (ans.size() == 0 || ans[0] != nums[i]) {
        int freq = 0;
        for (int j = 0; j < n; j++) {
          if (nums[j] == nums[i])
            freq++;
        }
        if (freq > condn)
          ans.push_back(nums[i]);
      }
      if (ans.size() == 2)
        break;
    }
    return ans;
  }
};
