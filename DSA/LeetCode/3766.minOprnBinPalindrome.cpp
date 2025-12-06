#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
  bool isPalindrome(int x) {
    string s = bitset<32>(x).to_string();
    s.erase(0, s.find_first_not_of('0'));
    int l = 0, r = s.size() - 1;
    while (l < r) {
      if (s[l] != s[r])
        return false;
      l++;
      r--;
    }
    return true;
  }
  vector<int> minOperations(vector<int> &nums) {
    vector<int> ans;
    for (int num : nums) {
      int d = 0;
      while (true) {
        if (num - d >= 0 && isPalindrome(num - d)) {
          ans.push_back(d);
          break;
        }
        if (isPalindrome(num + d)) {
          ans.push_back(d);
          break;
        }
        d++;
      }
    }
    return ans;
  }
};
