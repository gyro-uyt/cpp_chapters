#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
  // Sliding window, O(n)
  int lengthOfLongestSubstring(string s) {
    int ans = 0;
    unordered_set<char> seen;
    int l = 0;

    for (int r = 0; r < s.size(); r++) {
      while (seen.count(s[r])) {
        seen.erase(s[l]);
        l++;
      }
      seen.insert(s[r]);
      ans = max(ans, r - l + 1);
    }

    return ans;
  }
  // brute-force, O(n2)
  int lengthOfLongestSubstring0(string s) {
    int n = s.size();
    if (n == 0)
      return 0;
    int ans = 0;

    for (int i = 0; i < n; i++) {
      unordered_set<char> seen;
      for (int j = i; j < n; j++) {
        if (seen.count(s[j]))
          break;
        seen.insert(s[j]);
        ans = max(ans, j - i + 1);
      }
    }
    return ans;
  }
};