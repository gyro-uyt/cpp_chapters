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
#include <climits>
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
  int bruteForce(vector<int> &nums) {
    int maxSum = INT_MIN;
    int n = nums.size();
    for (int i = 0; i < n; i++) {
      for (int j = i; j < n; j++) {
        int sum = 0;
        for (int k = i; k <= j; k++)
          sum += nums[k];
        maxSum = max(maxSum, sum);
      }
    }
    return maxSum;
  }
  int better(vector<int> &nums) {
    int maxSum = INT_MIN;
    int n = nums.size();
    for (int i = 0; i < n; i++) {
      int sum = 0;
      for (int j = i; j < n; j++) {
        sum += nums[j];
        maxSum = max(maxSum, sum);
      }
    }
    return maxSum;
  }
  int optimal(vector<int> &nums) {
    int sum = 0;
    int maxSum = INT_MIN;
    int n = nums.size();
    for (int i = 0; i < n; i++) {
      if (sum < 0)
        sum = 0;
      sum += nums[i];
      maxSum = max(maxSum, sum);
    }
    return maxSum;
  }
};

int main() {
  Solution s1;
  vector<int> arr = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
  cout << s1.optimal(arr) << endl;

  return 0;
}
