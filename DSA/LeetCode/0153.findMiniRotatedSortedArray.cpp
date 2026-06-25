#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
  int findMin(vector<int> &nums) {
    int mini = INT_MAX;
    int low = 0, high = nums.size() - 1;
    while (low <= high) {
      int mid = low + (high - low) / 2;

      // this conditions means that low <= mid && mid <= high
      // meaning for left and right are sorted, hence search space is
      // already sorted then low will be the smallest in that search space
      if (nums[low] <= nums[high]) {
        mini = min(mini, nums[low]);
        break;
      }
      // left half sorted, hence no need to check full section just check the
      // first element
      if (nums[low] <= nums[mid]) {
        mini = min(mini, nums[low]);
        low = mid + 1;
      } else { // right half sorted
        mini = min(mini, nums[mid]);
        high = mid - 1;
      }
    }
    return mini;
  }
};
