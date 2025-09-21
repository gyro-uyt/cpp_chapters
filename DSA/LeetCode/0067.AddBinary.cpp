/*
Given two binary strings a and b, return their sum as a binary string.
  Example 1:
    Input: a = "11", b = "1"
    Output: "100"
  Example 2:
    Input: a = "1010", b = "1011"
    Output: "10101"
*/
#include <bits/stdc++.h>
#include <string>
#include <algorithm>
#include <iostream>
using namespace std;

class Solution {
  public:
    string addBinary(string a, string b) { 
    string ans;
    int carry = 0;

    reverse(a.begin(), a.end());
    reverse(b.begin(), b.end());

    int n = max(a.size(), b.size());

    for (int i = 0; i < n; i++) {
        int digitA = (i < a.size() ? a[i] - '0' : 0);
        int digitB = (i < b.size() ? b[i] - '0' : 0);

        int sum = digitA + digitB + carry;
        ans.push_back((sum % 2) + '0');
        carry = sum / 2;
    }

    if (carry) ans.push_back('1');

    reverse(ans.begin(), ans.end());
    return ans;
}

};

int main() {
  string x = "0";
  string y = "0";

  Solution s1;
  string ans = s1.addBinary(x, y);
  cout << ans << endl;

  //cout << "binToInt\n";
  //cout << s1.binaryToInt(x) << endl;

  return 0;
}
