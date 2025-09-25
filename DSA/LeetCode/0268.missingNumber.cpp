#include <unordered_map>
#include <vector>
using namespace std;

class Solution {
public:
  int missingNumber(vector<int> &nums) {
    int n = nums.size();
    int expectedSum = (n * (n + 1)) / 2;
    int sum = 0;
    for (int i : nums)
      sum += i;
    return expectedSum - sum;
  }

  int M3missingNumber(vector<int> &nums) {
    int n = nums.size();
    int xorAll = 0;

    // XOR all indices and numbers in nums
    for (int i = 0; i < n; i++) 
      xorAll ^= i ^ nums[i];

    // XOR the last number n
    xorAll ^= n;

    return xorAll;
  }

  int M2missingNumber(vector<int> &nums) {
    unordered_map<int, int> store;
    for (int i : nums) {
      store[i]++;
    }

    for (int i = 0; i <= nums.size(); i++) { // range is [0, n]
      if (store[i] == 0)
        return i;
    }
    return -1;
  }
};