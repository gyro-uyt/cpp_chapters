#include <bits/stdc++.h>
#include <string>
using namespace std;

// "2080-02-29" -> "100000100000-10-11101"
class OptimalSolution {
  void appendBinary(string &str, int n) {
    if (n == 0) {
      str.push_back('0');
      return;
    }
    // Find the most significant bit (e.g., for 5 (101), start at bit 2)
    int i = 30;
    while ((n >> i & 1) == 0) 
      i--;

    // Append bits from MSB to LSB
    while (i >= 0) {
      str.push_back(((n >> i) & 1) ? '1' : '0');
      i--;
    }
  }
  string convertDateToBinary(string date) {
    string ans;
    ans.reserve(32); // pre-allocation memory to avoid resizing

    int year = (date[0] - '0') * 1000 + (date[1] - '0') * 100 +
               (date[2] - '0') * 10 + (date[3] - '0');
    int month = (date[5] - '0') * 10 + (date[6] - '0');
    int day = (date[8] - '0') * 10 + (date[9] - '0');

    appendBinary(ans, year);
    ans.push_back('-');
    appendBinary(ans, month);
    ans.push_back('-');
    appendBinary(ans, day);
    return ans;
  }
};

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
