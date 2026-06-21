#include <vector>
using namespace std;

class Solution {
public:
  // iterative Solution
  int search1(vector<int> &nums, int target) {
    int low = 0;
    int high = nums.size() - 1;
    while (low <= high) {
      int mid = low + (high - low) / 2;
      if (nums[mid] == target) {
        while (nums[mid] == nums[mid - 1]) // returns the first occurance
          mid--;
        return mid;
      } else if (nums[mid] > target)
        high = mid - 1;
      else
        low = mid + 1;
    }
    return -1;
  }

  // recursive Solution
  int bs(vector<int> &nums, int target, int low, int high) {
    if (low > high)
      return -1;
    int mid = low + (high - low) / 2;
    if (nums[mid] == target) {
      while (nums[mid] == nums[mid - 1])
        mid--;
      return mid;
    } else if (target < nums[mid])
      return bs(nums, target, low, mid - 1);
    else
      return bs(nums, target, mid + 1, high);
  }
  int search2(vector<int> &nums, int target) {
    return bs(nums, target, 0, nums.size() - 1);
  }
};
