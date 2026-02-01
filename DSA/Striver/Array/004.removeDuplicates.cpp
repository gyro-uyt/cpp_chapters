#include <bits/stdc++.h>
#include <set>
using namespace std;

class Solution {
public:
  int optimal(vector<int> &arr, int n) {
    int i, j;
    for (i = 1, j = 1; i < arr.size(); i++)
      if (arr[i] != arr[i - 1])
        arr[j++] = arr[i];
    return j;
  }
  
  vector<int> bruteForce(vector<int> &arr) {
    // code here
    set<int> store;
    int n = arr.size();
    for (int i = 0; i < n; i++)
      store.insert(arr[i]);

    int idx = 0;
    for (auto i : store) {
      arr[idx] = i;
      idx++;
    }
    // return idx; // if it wants count of unique elements
    return arr;
  }
};
