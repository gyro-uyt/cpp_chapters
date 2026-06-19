#include <bits/stdc++.h>
#include <vector>
using namespace std;

class Solution {
public:
  int merge(vector<int> &arr, int l, int h) {
    int left = l;
    int mid = (l + h) / 2;
    int right = mid + 1;
    vector<int> tmp;
    int count = 0;

    while (left <= mid && right <= h) {
      if (arr[left] <= arr[right])
        tmp.push_back(arr[left++]);
      else { // left > right
        tmp.push_back(arr[right++]);
        count += mid - left + 1;
        // bcz left pointer's value is greater than right one hence, all the
        // elements next to left will also form pair with righ pointer and
        // no. of such elements = mid - left + 1
      }
    }
    while (left <= mid)
      tmp.push_back(arr[left++]);
    while (right <= h)
      tmp.push_back(arr[right++]);

    for (int i = l; i <= h; i++)
      arr[i] = tmp[i - l];

    return count;
  }
  int mergeSort(vector<int> &arr, int l, int h) {
    int count = 0;
    if (l >= h)
      return count;
    int mid = (l + h) / 2;
    count += mergeSort(arr, l, mid);
    count += mergeSort(arr, mid + 1, h);
    count += merge(arr, l, h);

    return count;
  }
  int optimal(vector<int> &arr) { return mergeSort(arr, 0, arr.size() - 1); }

  int bruteForce(vector<int> &arr) {
    int count = 0;
    int n = arr.size();
    for (int i = 0; i < n - 1; i++)
      for (int j = i + 1; j < n; j++)
        if (arr[i] > arr[j])
          count++;
    return count;
  }
};
