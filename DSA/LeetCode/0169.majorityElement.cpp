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
  int majorityElement(std::vector<int> &nums) {
    int count = 0;
    int candidate = 0; // Will be set on the first iteration

    for (int num : nums) {
      if (count == 0)
        candidate = num;

      if (num == candidate)
        count++;
      else
        count--;
    }

    return candidate;
  }

  int majorityElement0(vector<int> &nums) {
    unordered_map<int, int> freq;
    for (auto i : nums)
      freq[i]++;

    int condition = nums.size() / 2;

    for (auto i : freq)
      if (i.second > condition)
        return i.first;

    return -1;
  }
};
