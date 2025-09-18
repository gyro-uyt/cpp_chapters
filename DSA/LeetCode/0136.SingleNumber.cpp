#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
  int singleNumber(vector<int> &nums) {
    int ans = nums[0];
    for (int i = 1; i < nums.size(); i++)
      ans ^= nums[i];
    return ans;
  }
  int STLsingleNumber(vector<int> &nums) {
    int ans = 0;    // xor with 0 returns the same value
    for (auto i : nums)
        ans^=nums[i];
    return ans;
  }
};

int main() {
  Solution s1;
  vector<int> arr = {4, 1, 2, 1, 2, 4};
  cout << s1.singleNumber(arr) << endl;
  cout << (arr[0] ^ 0 ^ 0) << endl;
  return 0;
}