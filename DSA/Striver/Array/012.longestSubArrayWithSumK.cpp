#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

// Longest Subarray With Sum K (Positive/Zeroes elements only)
class SolutionPositive {
public:
  int bruteForce(vector<int> &arr, int k) {
    int n = arr.size();
    int maxLen = 0;
    for (int i = 0; i < n; i++) {
      int sum = 0;
      for (int j = i; j < n; j++) {
        sum += arr[j];
        if (sum == k) {
          maxLen = max(maxLen, j - i + 1);
        }
      }
    }
    return maxLen;
  }
  // Hashing - TC: O(n x log n) {ordered-map} or O(n x n)
  // {unordered-map-high-collision}, SC: O(n)
  int better(vector<int> &arr, int k) {
    map<int, int> preSumMap;
    int sum = 0;
    int maxLen = 0;
    for (int i = 0; i < arr.size(); i++) {
      sum += arr[i];
      if (sum == k) {
        maxLen = max(maxLen, i + 1);
      }
      int rem = sum - k;
      // find() returns an iterator, not true/false. So we must compare it with
      // end() to check whether the key exists. end() returns an iterator
      // Positioned just after the last element If the iterator returned by
      // find() is NOT equal to end(), then the key exists.
      if (preSumMap.find(rem) != preSumMap.end()) {
        int len = i - preSumMap[rem];
        maxLen = max(maxLen, len);
      }
      // this condition is written to get the leftmost element with sum
      if (preSumMap.find(sum) == preSumMap.end()) {
        preSumMap[sum] = i;
      }
    }
    return maxLen;
  }
  // Two Pointer Approach - TC: O(2n), SC: O(1)
  int optimal(vector<int> &arr, int k) {
    int n = arr.size();
    int sum = arr[0];
    int maxLen = 0;
    int i = 0, j = 0;
    while (j < n) {
      while (i <= j && sum > k) {
        sum -= arr[i];
        i++;
      }
      if (sum == k) {
        maxLen = max(maxLen, j - i + 1);
      }
      j++;
      if (j < n) {
        sum += arr[j];
      }
    }
    return maxLen;
  }
};

// Longest Subarray With Sum K (Positives/Negatives/Zeroes all present),
// for this question the Hashmap solution is the optimal solution
int optimal(vector<int> &arr, int k) {
  map<int, int> preSumMap;
  int sum = 0;
  int maxLen = 0;
  for (int i = 0; i < arr.size(); i++) {
    sum += arr[i];
    if (sum == k) {
      maxLen = max(maxLen, i + 1);
    }
    int rem = sum - k;
    if (preSumMap.find(rem) != preSumMap.end()) {
      int len = i - preSumMap[rem];
      maxLen = max(maxLen, len);
    }
    if (preSumMap.find(sum) == preSumMap.end()) {
      preSumMap[sum] = i;
    }
  }
  return maxLen;
}