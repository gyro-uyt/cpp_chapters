#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
  int longestConsecutive(vector<int> &nums) {
    int n = nums.size();
    if (n == 0)
      return 0;
    unordered_set<int>
        store; // used unordered_sets bcz search operations are O(1)
    int maxLen = 1;
    for (int i : nums)
      store.insert(i);
    for (int i : store) {
      // searching for consecutive previous element
      if (store.find(i - 1) ==
          store.end()) { // if it not exists, then start counting from here
        int cnt = 1;
        int x = i;
        while (store.find(x + 1) !=
               store.end()) { // counting till no more consecutive numbers
          cnt++;
          x++;
        }
        maxLen = max(maxLen, cnt); // compare counts
      }
    }
    return maxLen;
  }
};
