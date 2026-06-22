#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
  vector<int> searchRange(vector<int> &nums, int target) {
    int first = -1, last = -1;
    int n = nums.size();

    int low = 0, high = n - 1;
    while (low <= high) {
      int mid = low + (high - low) / 2;
      if (nums[mid] == target) {
        first = mid;
        high = mid - 1; // keeps searching left until the first occurance
      } else if (nums[mid] < target)
        low = mid + 1;
      else
        high = mid - 1;
    }

    low = 0, high = n - 1;
    while (low <= high) {
      int mid = low + (high - low) / 2;
      if (nums[mid] == target) {
        last = mid;
        low = mid + 1; // keeps searching right until the last occurance
      } else if (nums[mid] < target)
        low = mid + 1;
      else
        high = mid - 1;
    }

    return {first, last};
  }
};
