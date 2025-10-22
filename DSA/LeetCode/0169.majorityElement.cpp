#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;

class Solution {
public:
  int majorityElement(vector<int> &nums) {
    unordered_map<int, int> freq;
    for (auto i : nums)
      freq[i]++;

    int condition = nums.size() / 2;

    for (auto i : freq)
      if (i.second > condition)
        return i.first;

    return -1;
  }
};
