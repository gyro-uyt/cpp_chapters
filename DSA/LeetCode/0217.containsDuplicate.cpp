#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;

class Solution {
public:
  bool containsDuplicate(vector<int> &nums) {
    unordered_map<int, int> store;
    for (auto i : nums) {
      store[i]++;
      if (store[i] > 1)
        return true;
    }
    return false;
  }
};
