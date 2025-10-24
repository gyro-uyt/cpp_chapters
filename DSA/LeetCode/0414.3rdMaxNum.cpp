#include <bits/stdc++.h>
#include <set>
using namespace std;

class Solution {
public:
  int thirdMax(vector<int> &nums) {
    // A set stores unique, sorted elements
    set<int> top3;

    for (auto i : nums) {
      top3.insert(i);
      if (top3.size() > 3)
        top3.erase(top3.begin());
    }
    // Now top3 holds 3 largest numbers only

    if (top3.size() == 3) {
      return *top3.begin();
    } else
      return *top3.rbegin();
  }
};
