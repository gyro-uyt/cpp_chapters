#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;

class Solution {
public:
  // More Efficient Solution (Boyer-Moore Voting Algorithm) O(n) time and uses
  // O(1) constant space
  /* The logic is that the majority element's count will "out-vote" all other
    elements combined.

    Assume the first element is the candidate and set count = 1.
    Iterate through the rest of the array.
    If count is 0, set the current element as the new candidate.
    If the current element equals candidate, increment count.
    If the current element is different, decrement count.
    The candidate remaining at the end will be the majority element.
*/
  int optimal(vector<int> &nums) {
    int count = 0;
    int element;
    for (int i : nums) {
      if (count == 0) {
        element = i;
        count = 1;
      } else if (i == element)
        count++;
      else
        count--;
    }
    int freqE = 0;
    for (int i : nums)
      if (i == element)
        freqE++;

    return (freqE > nums.size() / 2) ? element : -1;
  }

  int bruteForce(vector<int> &nums) {
    unordered_map<int, int> f;
    for (int i : nums)
      f[i]++;
    int mE = nums[0];
    int fE = 0;
    for (auto i : f) {
      if (i.second > fE) {
        mE = i.first;
      }
    }
    return mE;
  }
};
