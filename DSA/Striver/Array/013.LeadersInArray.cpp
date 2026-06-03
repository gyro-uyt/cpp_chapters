#include <algorithm>
#include <bits/stdc++.h>
#include <climits>
#include <vector>
using namespace std;

class Solution {
public:
  vector<int> bruteForce(vector<int> &arr) {
    vector<int> ans;
    int n = arr.size();
    for (int i = 0; i < n; i++) {
      bool leader = true;
      for (int j = i + 1; j < n; j++)
        if (arr[i] < arr[j]) {
          leader = false;
          break;
        }
      if (leader)
        ans.push_back(arr[i]);
    }
    return ans;
  }
  vector<int> optimal(vector<int> &arr) {
    int maxi = INT_MIN;
    vector<int> ans;
    for (int i = arr.size() - 1; i >= 0; i--) {
      if (arr[i] >= maxi) {
        maxi = arr[i];
        ans.push_back(arr[i]);
      }
    }
    reverse(ans.begin(), ans.end());
    return ans;
  }
};
