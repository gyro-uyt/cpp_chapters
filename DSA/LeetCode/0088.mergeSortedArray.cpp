#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
  void merge(vector<int> &nums1, int m, vector<int> &nums2, int n) {
    if (n == 0)
      return;

    vector<int> merged;
    for (int i = 0; i < m; ++i) {
      merged.push_back(nums1[i]);
    }
    int p1 = 0; // Pointer for temp_nums1 (original nums1 elements)
    int p2 = 0; // Pointer for nums2
    int i = 0;  // Pointer for the final nums1 array

    while (p1 < m && p2 < n) {
      if (merged[p1] <= nums2[p2]) {
        nums1[i] = merged[p1];
        p1++;
      } else {
        nums1[i] = nums2[p2];
        p2++;
      }
      i++;
    }
    while (p2 < n) {
      nums1[i] = nums2[p2];
      p2++;
      i++;
    }
  }
};
