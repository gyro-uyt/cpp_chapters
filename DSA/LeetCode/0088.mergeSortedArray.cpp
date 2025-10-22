#include <bits/stdc++.h>
#include <vector>
using namespace std;

class Solution {
public:
  void merge2(vector<int> &nums1, int m, vector<int> &nums2, int n) {
    if (n == 0)
      return;

    vector<int> nums3[m + n];
    int i = 0;
    int j = 0;
    int index = 0;

    while (i < m && j < n) {
      if (nums1[i] <= nums2[j]) {
        nums3[index] = nums1[i];
        i++;
        index++;
      } else {
        nums3[index] = nums2[j];
        j++;
        index++;
      }
    }

    // if i < m
    while (i < m)
      nums3[index++] = nums1[i++];

    // if j < n
    while (j < n)
      nums3[index++] = nums2[j++];
  }
};
