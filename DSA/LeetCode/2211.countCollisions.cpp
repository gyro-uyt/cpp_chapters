#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
  int countCollisions(string directions) {
    int l = 0;
    int r = directions.size() - 1;
    int n = directions.size();
    int collisions;

    while (l < n && directions[l] == 'L')
      l++;
    while (r >= 0 && directions[r] == 'R')
      r--;

    while (l <= r) {
      if (directions[l] != 'S')
        collisions++;
      l++;
    }

    return collisions;
  }
};
