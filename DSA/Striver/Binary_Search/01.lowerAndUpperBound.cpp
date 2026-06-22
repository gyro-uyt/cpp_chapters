#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
  int lowerBound(vector<int> arr, int n, int x) {
    int low = 0;
    int high = n - 1;
    int ans = n;
    while (low <= high) {
      int mid = low + (high - low) / 2;
      if (arr[mid] >= x) {
        ans = mid;      // maybe ans
        high = mid - 1; // searching smaller index on left
      } else
        low = mid + 1; // search right
    }
    return ans;
  }
  int lowerBoundCpp(vector<int> arr, int n, int x) {
    // following will return an iterator pointing to the lowerBound
    auto lb = lower_bound(arr.begin(), arr.end(), x);
    int index = lb - arr.begin(); // this will give the index
    return index;
  }
  int upperBoundCpp(vector<int> arr, int n, int x) {
    auto ub = upper_bound(arr.begin(), arr.end(), x);
    int idx = ub - arr.begin();
    return idx;
  }
  int upperBound(vector<int> &arr, int x, int n) {
    int low = 0;
    int high = n - 1;
    int ans = n;
    while (low <= high) {
      int mid = low + (high - low) / 2;
      if (arr[mid] > x) {
        ans = mid;
        high = mid - 1; // maybe ans, search left
      } else
        low = mid + 1; // search right, for bigger elements
    }
    return ans;
  }
  vector<int> getFloorAndCeil(int x, vector<int> &arr) {
    // code here
    sort(arr.begin(), arr.end());
    int f = -1, c = -1;
    int n = arr.size();
    int low = 0, high = n - 1;

    // find floor
    while (low <= high) {
      int mid = low + (high - low) / 2;
      if (arr[mid] <= x) {
        f = arr[mid];
        low = mid + 1;
      } else
        high = mid - 1;
    }

    // find ceil
    low = 0, high = n - 1;
    while (low <= high) {
      int mid = low + (high - low) / 2;
      if (arr[mid] >= x) {
        c = arr[mid];
        high = mid - 1;
      } else
        low = mid + 1;
    }

    return {f, c};
  }
};
