#include <bits/stdc++.h>
#include <cctype>
#include <string>
using namespace std;

class Solution {
public:
  bool isPalindromeO(string s) {
    int l = 0;
    int r = s.size() - 1;

    while (l < r) {
      while (l < r && !isalnum(s[l]))
        l++;
      while (l < r && !isalnum(s[r]))
        r--;

      if (tolower(s[l]) != tolower(s[r]))
        return false;

      l++;
      r--;
    }
    return true;
  }
  bool isPalindrome(string s) {
    string s1 = "";
    for (char c : s)
      if (isalnum(c))
        s1 += tolower(c);

    if (s1.empty())
      return true;

    char *l = &s1[0];
    char *r = &s1[s1.size() - 1];

    while (l <= r)
      if (*l != *r)
        return false;

    return true;
  }
};
int main() {
  Solution s1;
  string s = "A man, a plan, a canal: Panama";
  s1.isPalindrome(s);
  return 0;
}
