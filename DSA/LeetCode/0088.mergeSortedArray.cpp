#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
  void optimal1(vector<int> &nums1, int m, vector<int> &nums2, int n) {
    int i = m - 1;
    int j = n - 1;
    int k = m + n - 1;
    while (j >= 0) { // moved the i>=0 in if statement to avoid extra while loop
      if (i >= 0 && nums1[i] >= nums2[j])
        nums1[k--] = nums1[i--];
      else
        nums1[k--] = nums2[j--];
    }
    // while (i >= 0) // this runs if j < 0 but in that case rest of nums1
    // element not need to be adjusted as they are already in sorted order
    //  nums1[k--] = nums1[i--];
    // while (j >= 0) // merged this loop with above while loop
    //   nums1[k--] = nums2[j--];
  }
  void bruteForce(vector<int> &nums1, int m, vector<int> &nums2, int n) {
    vector<int> ans;
    int i = 0, j = 0;
    while (i < m && j < n) {
      if (nums1[i] <= nums2[j])
        ans.push_back(nums1[i++]);
      else
        ans.push_back(nums2[j++]);
    }
    while (i < m)
      ans.push_back(nums1[i++]);
    while (j < n)
      ans.push_back(nums2[j++]);
    nums1 = ans;
  }
};
