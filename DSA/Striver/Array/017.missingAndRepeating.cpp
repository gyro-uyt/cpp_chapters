#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
  vector<int> better(vector<int> &arr) {
    int missing = -1, repeating = -1;
    int n = arr.size();
    vector<int> hash(n + 1, 0);
    for (int i = 0; i < n; i++)
      hash[arr[i]]++;
    for (int i = 1; i <= n; i++) {
      if (hash[i] == 0)
        missing = i;
      else if (hash[i] == 2)
        repeating = i;
      if (repeating != -1 && missing != -1)
        break;
    }
    return {repeating, missing};
  }
  vector<int> bruteForce(vector<int> &arr) {
    int missing = -1, repeating = -1;
    int n = arr.size();
    for (int i = 0; i < n; i++) {
      int freq = 0;
      for (int j = 0; j < n; j++)
        if (arr[j] == arr[i])
          freq++;
      if (freq == 0)
        missing = arr[i];
      else if (freq == 2)
        repeating = arr[i];

      if (repeating != -1 && missing != -1)
        break;
    }
    return {repeating, missing};
  }
};
