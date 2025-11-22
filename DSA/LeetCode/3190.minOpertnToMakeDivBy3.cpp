#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
  int minimumOperations(vector<int> &nums) {
    int count = 0;
    for (int num : nums)
      if (num % 3 != 0)
        count++;

    return count;
  }
};
