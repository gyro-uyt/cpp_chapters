#include <bits/stdc++.h>
#include <string>
using namespace std;

class Solution {
public:
  string itobs(int n) {
    if (n == 0)
      return "0";
    string ans;
    while (n > 0) {
      ans.push_back((n % 2) + '0');
      n /= 2;
    }
    reverse(ans.begin(), ans.end());
    return ans;
  }
  string convertDateToBinary(string date) {
    string ans;

    ans += itobs(stoi(date.substr(0, 4)));
    ans += '-';
    ans += itobs(stoi(date.substr(5, 2)));
    ans += '-';
    ans += itobs(stoi(date.substr(8, 2)));
    return ans;
  }
};
