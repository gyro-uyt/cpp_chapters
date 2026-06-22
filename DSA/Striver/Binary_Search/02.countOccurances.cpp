#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
  int countFreq(vector<int> &nums, int x) {
    // code here
    int first = -1, last = -1;
    int n = nums.size();

    int low = 0, high = n - 1;
    while (low <= high) {
      int mid = low + (high - low) / 2;
      if (nums[mid] == x) {
        first = mid;
        high = mid - 1; // keeps searching left until the first occurance
      } else if (nums[mid] < x)
        low = mid + 1;
      else
        high = mid - 1;
    }

    low = 0, high = n - 1;
    while (low <= high) {
      int mid = low + (high - low) / 2;
      if (nums[mid] == x) {
        last = mid;
        low = mid + 1; // keeps searching right until the last occurance
      } else if (nums[mid] < x)
        low = mid + 1;
      else
        high = mid - 1;
    }
    if (first == -1 || last == -1)
      return 0;
    return last - first + 1;
  }
};
