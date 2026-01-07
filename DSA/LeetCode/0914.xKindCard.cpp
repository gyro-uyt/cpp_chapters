#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
  bool hasGroupsSizeX(vector<int> &deck) {

    unordered_map<int, int> f;
    for (int i : deck)
      f[i]++;
    int gcdiv = 0;
    for (auto i : f)
      gcdiv = gcd(gcdiv, i.second);
    return gcdiv > 1;
  }
};
