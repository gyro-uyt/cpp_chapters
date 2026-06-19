#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
  void merge(vector<int> &nums, int l, int r) {
    int left = l;
    int mid = (l + r) / 2;
    int right = mid + 1;
    vector<int> tmp;

    while (left <= mid && right <= r) {
      if (nums[left] <= nums[right])
        tmp.push_back(nums[left++]);
      else
        tmp.push_back(nums[right++]);
    }
    while (left <= mid)
      tmp.push_back(nums[left++]);
    while (right <= r)
      tmp.push_back(nums[right++]);

    for (int i = l; i <= r; i++)
      nums[i] = tmp[i - l];
  }
  int countPairs(vector<int> &nums, int l, int r) {
    int count = 0;
    int mid = (l + r) / 2;
    int right = mid + 1;

    for (int i = l; i <= mid; i++) {
      // while loop won't re-iterate the same elements again as we use same
      // value of right hence the TC of this nested for-while loop would be O(n)
      // only
      while (right <= r && nums[i] > 2LL * nums[right])
        right++;
      count += right - (mid + 1);
    }
    return count;
  }
  int mergeSort(vector<int> &nums, int l, int r) {
    int count = 0;
    if (l >= r)
      return count;
    int mid = (l + r) / 2;
    count += mergeSort(nums, l, mid);
    count += mergeSort(nums, mid + 1, r);
    count += countPairs(nums, l, r); // counts in TC: O(n)
    merge(nums, l, r);

    return count;
  }
  int reversePairs(vector<int> &nums) {
    return mergeSort(nums, 0, nums.size() - 1);
  }
};
