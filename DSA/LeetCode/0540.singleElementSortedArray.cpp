#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
  int singleStriver(vector<int> &arr) {
    int n = arr.size();
    if (n == 1)
      return arr[0];
    if (arr[0] != arr[1])
      return arr[0];
    if (arr[n - 1] != arr[n - 2])
      return arr[n - 1];

    int low = 1, high = n - 2;
    while (low <= high) {
      int mid = low + (high - low) / 2;

      // check if this is the single
      if (arr[mid] != arr[mid + 1] && arr[mid] != arr[mid - 1])
        return arr[mid];

      // we are on [E,O] correct parity, hence search on right
      if ((mid % 2 == 0 && arr[mid] == arr[mid + 1]) ||
          (mid % 2 == 1 && arr[mid] == arr[mid - 1]))
        low = mid + 1;
      else // we are on [O,E], reversed parity search on left
        high = mid - 1;
    }
    return -1;
  }

  // this solution logic is made by me, if not understands then check obsidian
  // note LC-153, 540 Minimum and single in Rotated sorted array
  int singleNonDuplicate(vector<int> &nums) {
    int low = 0, high = nums.size() - 1;
    if (low == high || nums[0] != nums[1])
      return nums[0];
    if (nums[high] != nums[high - 1])
      return nums[high];
    while (low <= high) {
      int mid = low + (high - low) / 2;

      if (mid % 2 == 0) {
        if (nums[mid] == nums[mid - 1])
          high = mid - 1;
        else if (nums[mid] == nums[mid + 1])
          low = mid + 1;
        else
          return nums[mid];
      } else {
        if (nums[mid] == nums[mid + 1])
          high = mid - 1;
        else
          low = mid + 1;
      }
    }
    return -1;
  }
};
