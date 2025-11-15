#include <bits/stdc++.h>
using namespace std;

string convert(string s, int numRows) {
  if (numRows == 1)
    return s;
  vector<string> rows(min(numRows, (int)s.size()));
  int currRow = 0;
  int goingDown = false;

  for (char c : s) {
    rows[currRow] += c;
    if (currRow == 0 || currRow == numRows - 1)
      goingDown = !goingDown;
    currRow += goingDown ? 1 : -1;
  }

  string ans = "";
  for (string str : rows)
    ans += str;

  return ans;
}
