#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
  vector<int> findWordsContaining(vector<string> &words, char x) {
    vector<int> ans;
    int i = 0;
    for (string word : words) {
      for (char c : word)
        if (c == x) {
          ans.push_back(i);
          break;
        }
      i++;
    }
    return ans;
  }
};
