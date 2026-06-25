#include <bits/stdc++.h>
using namespace std;

class Solution {
  int findKRotation(vector<int> &arr) {
    int low = 0, high = arr.size() - 1;
    int mini = INT_MAX;
    int miniIndx = -1;
    while (low <= high) {
      int mid = low + (high - low) / 2;

      if (arr[low] <= arr[high]) {
        if (arr[low] < mini) {
          mini = arr[low];
          miniIndx = low;
        }
        break;
      }

      if (arr[low] <= arr[mid]) {
        if (arr[low] < mini) {
          mini = arr[low];
          miniIndx = low;
        }
        low = mid + 1;
      } else {
        if (arr[mid] < mini) {
          mini = arr[mid];
          miniIndx = mid;
        }
        high = mid - 1;
      }
    }
    return miniIndx;
  }
};
