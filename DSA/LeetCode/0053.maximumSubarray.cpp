/*
We’re looking for a contiguous subarray (that’s the keyword!) with the maximum
sum. That means the elements must be next to each other, no skipping around.

Given an integer array nums, find the subarray
with the largest sum, and return its sum.

Example 1:
    Input: nums = [-2,1,-3,4,-1,2,1,-5,4]
    Output: 6
    Explanation: The subarray [4,-1,2,1] has the largest sum 6.

Example 2:
    Input: nums = [1]
    Output: 1
    Explanation: The subarray [1] has the largest sum 1.
*/
#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
  int maxSubArray(vector<int> &nums) {
    int maxSum = nums[0];
    int currentSum = nums[0];

    for (int i = 1; i < nums.size(); i++) {
      currentSum = max(currentSum + nums[i], nums[i]); // extend or restart
      maxSum = max(currentSum, maxSum);                // update best seen
    }

    return maxSum;
  }
};

int main() {
  Solution s1;
  vector<int> arr = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
  cout << s1.maxSubArray(arr) << endl;

  return 0;
}