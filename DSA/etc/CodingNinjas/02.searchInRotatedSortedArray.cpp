/*
Search In Rotated Sorted Array
    You have been given a sorted array/list 'arr' consisting of ‘n’ elements.
    You are also given an integer ‘k’, Now the array is rotated at some pivot
point unknown to you.

    For example, if 'arr' = [ 1, 3, 5, 7, 8], then after rotating 'arr' at index
3, the array will be 'arr' = [7, 8, 1, 3, 5]. Now, your task is to find the
index at which ‘k’ is present in 'arr'.

Note :
    1. If ‘k’ is not present in 'arr', then print -1.
    2. There are no duplicate elements present in 'arr'.
    3. 'arr' can be rotated only in the right direction.

Example:
    Input: 'arr' = [12, 15, 18, 2, 4] , 'k' = 2
    Output: 3
    Explanation:
        If 'arr' = [12, 15, 18, 2, 4] and 'k' = 2, then the position at
        which 'k' is present in the array is 3 (0-indexed).

Try Approach-2
At any point in a rotated sorted array, one half is always sorted.
    If the target lies inside that sorted half → search there.
    Else → search in the other half.
    This way we don’t need a separate pivot-finding function.

    Code - 
        int search(vector<int>& arr, int n, int k) {
        int s = 0, e = n - 1;

        while (s <= e) {
            int mid = s + (e - s) / 2;

            if (arr[mid] == k) return mid;

            // Left half is sorted
            if (arr[s] <= arr[mid]) {
                if (arr[s] <= k && k < arr[mid]) {
                    e = mid - 1;
                } else {
                    s = mid + 1;
                }
            }
            // Right half is sorted
            else {
                if (arr[mid] < k && k <= arr[e]) {
                    s = mid + 1;
                } else {
                    e = mid - 1;
                }
            }
        }

        return -1;
        }
Solve LeetCode 33 and 81
*/
#include <iostream>
#include <vector>
using namespace std;

// this is Approach-1
int getPivot(vector<int> &arr) {
  int s = 0, e = arr.size() - 1;
  while (s < e) {
    int mid = s + (e - s) / 2;
    if (arr[mid] >= arr[0]) {
      s = mid + 1;
    } else {
      e = mid;
    }
  }
  return s;
}
int binarySearch(vector<int> &arr, int s, int e, int k) {
  while (s <= e) {
    int mid = s + (e - s) / 2;
    if (arr[mid] == k) {
      return mid;
    } else if (arr[mid] < k) {
      s = mid + 1;
    } else {
      e = mid - 1;
    }
  }
  return -1;
}

int search(vector<int> &arr, int n, int k) {
  int pivot = getPivot(arr);

  if (k >= arr[pivot] && k <= arr[n - 1]) {
    // BS on second line
    return binarySearch(arr, pivot, n - 1, k);
  } else {
    // BS on first line
    return binarySearch(arr, 0, pivot-1, k);
  }
}

int main() {
  vector<int> arr = {11, 13, 5, 8, 9, 10};
  cout << search(arr, 6, 5) << endl;

  return 0;
}