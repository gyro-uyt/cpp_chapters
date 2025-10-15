#include <bits/stdc++.h>
#include <vector>
using namespace std;

class Solution {
  void recusion(int l, int r, vector<char> &s) {
    if (l >= r)
      return;
    swap(s[l], s[r]);
    recusion(l + 1, r - 1, s);
  }
  void reverseString(vector<char> &s) { recusion(0, s.size() - 1, s); }
};
