#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
  string longestCommonPrefix(vector<string> &strs) {
    if (strs.empty())
      return "";

    string ans = "";
    size_t minWordLength = INT_MAX;
    for (auto s : strs)
      minWordLength = min(s.size(), minWordLength);

    char possibleChar;
    for (int i = 0; i < minWordLength; i++) {
      possibleChar = strs[0][i];
      for (int j = 0; j < strs.size(); j++) {
        if (strs[j][i] != possibleChar)
          return ans;
      }
      ans.push_back(possibleChar);
    }
    return ans;
  }
};
