#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
  int countPartitions(vector<int> &nums) {
    int sum = accumulate(begin(nums), end(nums), 0);
    if (sum % 2 == 0)
      return nums.size() - 1;
    return 0;
  }
};
