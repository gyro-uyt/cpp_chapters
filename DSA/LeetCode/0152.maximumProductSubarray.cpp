/*
Given an integer array nums, find a subarray
that has the largest product, and return the product.
The test cases are generated so that the answer will fit in a 32-bit integer.

Example 1:
    Input: nums = [2,3,-2,4]
    Output: 6
    Explanation: [2,3] has the largest product 6.

Example 2:
    Input: nums = [-2,0,-1]
    Output: 0
    Explanation: The result cannot be 2, because [-2,-1] is not a subarray.
*/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
  int optimal1(vector<int> &nums) {
    int maxPro = INT_MIN;
    int prefix = 1;
    int suffix = 1;
    int n = nums.size();
    for (int i = 0; i < n; i++) {
      if (prefix == 0)
        prefix = 1;
      if (suffix == 0)
        suffix = 1;
      prefix *= nums[i];
      suffix *= nums[n - 1 - i];
      maxPro = max(maxPro, max(prefix, suffix));
    }
    return maxPro;
  }
  int bruteForce(vector<int> &nums) {
    long long maxProduct = nums[0];
    int n = nums.size();
    for (int i = 0; i < n; i++) {
      long long product = 1;
      for (int j = i; j < n; j++) {
        product *= nums[j];
        maxProduct = max(maxProduct, product);
      }
    }
    return (int)maxProduct;
  }
};

int main() {
  Solution s1;
  vector<int> arr = {-2, 3, -4};

  return 0;
}
