#include <bits/stdc++.h>
#include <vector>
using namespace std;

class Solution {
public:
  vector<int> optimal1Maths(vector<int> &arr) {
    long long n = arr.size();
    long long S = 0, S2 = 0;
    for (int i : arr) {
      S += i;
      S2 += 1LL * i * i;
    }
    long long Sn = n * (n + 1) / 2;
    long long Sn2 = n * (n + 1) * (2 * n + 1) / 6;
    long long val1 = S - Sn;            // missing - repeating
    long long val2 = (S2 - Sn2) / val1; // missing + repeating
    long long repeating = (val1 + val2) / 2;
    long long missing = val2 - repeating;
    return {(int)repeating, (int)missing};
  }
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
