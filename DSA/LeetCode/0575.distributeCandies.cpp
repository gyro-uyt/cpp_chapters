#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
  int distributeCandies(vector<int> &candyType) {
    set<int> store;

    for (auto i : candyType)
      store.insert(i);

    int n = candyType.size();
    int diffTypesCandies = store.size();

    return min(n / 2, diffTypesCandies);
  }
};
