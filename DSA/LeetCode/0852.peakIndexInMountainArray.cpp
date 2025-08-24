/*
852. Peak Index in a Mountain Array
    You are given an integer mountain array arr of length n where the values
    increase to a peak element and then decrease. Return the index of the peak
    element. Your task is to solve it in O(log(n)) time complexity.

Constraints:
    3 <= arr.length <= 105
    0 <= arr[i] <= 106
    arr is guaranteed to be a mountain array.

Example 1:
    Input: arr = [0,1,0]
    Output: 1
Example 2:
    Input: arr = [0,2,1,0]
    Output: 1
*/

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
  int peakIndexInMountainArray(vector<int> &arr) {

    // Approach-2
    int left = 0, right = arr.size() - 1;
    while (left < right) {
      int mid = left + (right - left) / 2;
      if (arr[mid] < arr[mid + 1]) {
        left = mid + 1;
      } else {
        right = mid;
      }
    }
    return left; // or right, since righ==left at this point

    // Approach-1
    // int size = arr.size();
    // int left = 1, right = size - 2;
    // // mountain gaurenteed hai to edge cases skip krdiye, helps avoid errors
    // for
    // // cases like arr[-1]<arr[0], arr[size-1]<arr[size], etc.
    // int middle;

    // while (left <= right) {
    //   middle = left + (right - left) / 2;
    //   if (arr[middle - 1] < arr[middle] && arr[middle] > arr[middle + 1]) {
    //     return middle;
    //   } else if (arr[middle - 1] < arr[middle]) {
    //     left = middle + 1;
    //   } else if (arr[middle - 1] > arr[middle]) {
    //     right = middle - 1;
    //   }
    // }
    // return -1;
  }
};

int main() {

  vector<int> arr = {3, 5, 3, 2, 0};
  Solution s;
  cout << s.peakIndexInMountainArray(arr) << endl;

  return 0;
}