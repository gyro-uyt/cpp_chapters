#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
  int single(vector<int> &arr) {
    int ans = 0;
    for (int i : arr)
      ans ^= i;
    return ans;
  }
};
