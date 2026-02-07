#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
  int findMaxConsecutiveOnes(vector<int> &nums) {
    int maxCount = 0;
    int count = 0;
    for (int i = 0; i < nums.size(); i++) {
      if (nums[i] == 1)
        count++;
      if (count > maxCount)
        maxCount = count;
      if (nums[i] == 0)
        count = 0;
    }
    return maxCount;
  }
};
