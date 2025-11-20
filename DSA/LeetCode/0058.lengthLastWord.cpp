#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
  int lengthOfLastWord(string s) {
    while (!s.empty() && s.back() == ' ')
      s.pop_back();
    if (s.empty())
      return 0;
    size_t lastspace = s.rfind(' ');
    if (lastspace == string::npos)
      return s.length();

    return s.length() - lastspace - 1;
  }
  int lengthOfLastWord1(string s) {
    int length = 0;
    int i = s.size() - 1;
    while (i >= 0 && s[i] == ' ')
      i--;
    while (i >= 0 && s[i] != ' ') {
      length++;
      i--;
    }
    return length;
  }
};
