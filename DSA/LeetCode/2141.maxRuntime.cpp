#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
  typedef long long ll;

  bool possible(vector<int> &batteries, ll midMinutes, int n) {
    ll targetMinutes = n * midMinutes;
    for (int i = 0; i < batteries.size(); i++) {
      targetMinutes -= min((ll)batteries[i], midMinutes);
      if (targetMinutes <= 0)
        return true;
    }
    return false;
  }

  long long maxRunTime(int n, vector<int> &batteries) {
    ll l = *min_element(batteries.begin(), batteries.end());
    ll sumTotalMinutes = 0;
    for (auto battery : batteries)
      sumTotalMinutes += battery;
    ll r = sumTotalMinutes / n;

    ll result = 0;

    while (l <= r) {
      ll mid = l + (r - l) / 2;
      if (possible(batteries, mid, n)) {
        result = mid;
        l = mid + 1;
      } else {
        r = mid - 1;
      }
    }

    return result;
  }
};
