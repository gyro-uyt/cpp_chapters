#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
  // Mine, O(n*m)
  int strStr0(string haystack, string needle) {
    for (int i = 0; i < haystack.size(); i++) {
      if (haystack[i] == needle[0] && i + needle.size() <= haystack.size()) {
        string check = haystack.substr(i, needle.size());
        if (check == needle)
          return i;
      }
    }
    return -1;
  }
  // KMP (Knuth–Morris–Pratt) algorithm, O(n+m)
  int strStr(string haystack, string needle) {
    if (needle.empty())
      return 0;

    int n = haystack.size();
    int m = needle.size();

    // Step 1: Build LPS array
    vector<int> lps(m, 0);
    for (int i = 1, len = 0; i < m;) {
      if (needle[i] == needle[len]) {
        len++;
        lps[i] = len;
        i++;
      } else {
        if (len != 0)
          len = lps[len - 1];
        else
          lps[i++] = 0;
      }
    }

    // Step 2: Search in haystack
    for (int i = 0, j = 0; i < n;) {
      if (haystack[i] == needle[j]) {
        i++;
        j++;
      }
      if (j == m)
        return i - j; // match found

      else if (i < n && haystack[i] != needle[j]) {
        if (j != 0)
          j = lps[j - 1];
        else
          i++;
      }
    }

    return -1;
  }
};
