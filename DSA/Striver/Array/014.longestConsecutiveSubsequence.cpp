#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
  int better(vector<int> &arr) {
    if (arr.empty())
      return 0;
    sort(arr.begin(), arr.end());
    int maxLen = 1;
    int currLen = 1;
    for (int i = 0; i < arr.size() - 1; i++) {
      if (arr[i + 1] == arr[i])
        continue;
      else if (arr[i + 1] == arr[i] + 1) {
        currLen++;
      } else {
        currLen = 1;
      }
      maxLen = max(maxLen, currLen);
    }
    return maxLen;
  }
  int optimal(vector<int> &arr) {
    int n = arr.size();
    if (n == 0)
      return 0;
    unordered_set<int> store;
    int maxLen = 1;
    for (int i : arr)
      store.insert(i);
    for (int i : store) {
      if (store.find(i - 1) == store.end()) {
        int cnt = 1;
        int x = i;
        while (store.find(x + 1) != store.end()) {
          x++;
          cnt++;
        }
        maxLen = max(maxLen, cnt);
      }
    }
    return maxLen;
  }
};
