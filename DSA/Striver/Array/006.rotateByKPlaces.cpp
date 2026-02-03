#include <bits/stdc++.h>
using namespace std;

// HW: implement Right rotations

vector<int> bruteForceLeftRotate(vector<int> arr, int k) {
  int n = arr.size();
  k = k % n;
  vector<int> temp;
  for (int i = 0; i < k; i++)
    temp.push_back(arr[i]);

  for (int i = 0; i < n - k; i++)
    arr[i] = arr[i + k];

  for (int i = n - k, j = 0; i < n; i++, j++)
    arr[i] = temp[j];

  return arr;
}

vector<int> optimalLeftRotate(vector<int> arr, int k) {
  int n = arr.size();
  k = k % n;

  // reverse(first_itr_included, second_itr_excluded);
  reverse(arr.begin(), arr.end());       // reverse all numbers
  reverse(arr.begin(), arr.begin() + k); // reverse first k-numbers
  reverse(arr.begin() + k, arr.end());   // reverse remaining numbers

  return arr;
}
