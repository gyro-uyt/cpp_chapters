#include <algorithm>
#include <bits/stdc++.h>
#include <vector>
using namespace std;

class Solution {
public:
  vector<vector<int>> merge(vector<vector<int>> &intervals) {
    sort(intervals.begin(), intervals.end());
    vector<vector<int>> ans;
    for (int i = 0; i < intervals.size(); i++) {
      if (i == 0 || ans.back()[1] < intervals[i][0])
        ans.push_back(intervals[i]);
      else
        ans.back()[1] = max(ans.back()[1], intervals[i][1]);
    }
    return ans;
  }
  vector<vector<int>> bruteForce(vector<vector<int>> &intervals) {
    sort(intervals.begin(), intervals.end());
    vector<vector<int>> ans;
    int n = intervals.size();
    // [x, y], [a, b], [c, d]
    for (int i = 0; i < n; i++) {
      int start = intervals[i][0]; // [a]
      int end = intervals[i][1];   // [b]

      // if b is less than y, then skip ?? bcz in this case [a, b] must have
      // already been merged with [x, y] in the prev. iteration, so you need to
      // skip this element and not take it
      if (!ans.empty() && end <= ans.back()[1])
        continue;
      for (int j = i + 1; j < n; j++) {
        // iterate till you can merge (find c's less than b's)
        if (intervals[j][0] <=
            end) // checking if c is lesser than b, if so merge
          end = max(end, intervals[j][1]); // merge and set end to max(b, d)
        else
          break; // b < c, therefore they can't be merged separate groups
      }
      ans.push_back(
          {start, end}); // this will have the final grp starts and ends
    }
    return ans;
  }
};
