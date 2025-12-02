#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;

class Solution {
public:
    int M = 1e9+7;
  int countTrapezoids(vector<vector<int>> &points) {
    unordered_map<int, int> mp;
    for (auto &point : points) {
      int y = point[1];
      mp[y]++;
    }
    long long result = 0;
    long long prevHzLines = 0;

    for (auto &it : mp) {
      long long count = it.second;
      long long hzLines = count * (count - 1) / 2;
      result += hzLines * prevHzLines;
      prevHzLines += hzLines;
    }
    return result % M;
  }
};
