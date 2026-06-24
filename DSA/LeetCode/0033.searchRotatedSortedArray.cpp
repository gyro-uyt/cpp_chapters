#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
  int search(vector<int> &nums, int target) {
    int low = 0, high = nums.size() - 1;
    while (low <= high) {
      int mid = low + (high - low) / 2;
      if (nums[mid] == target)
        return mid;

      if (nums[low] <= nums[mid]) { // if left half is sorted
        if (target >= nums[low] && target <= nums[mid])
          high = mid - 1; // if target lies in first half, search left
        else
          low = mid + 1; // else search right
      } else {           // if right half is sorted
        if (target >= nums[mid] && target <= nums[high])
          low = mid + 1;
        else
          high = mid - 1;
      }
    }
    return -1;
  }
};
