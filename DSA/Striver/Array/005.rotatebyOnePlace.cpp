#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
  void leftRotate(vector<int> &arr) {
    int n = arr.size();
    int temp = arr[0];

    for (int i = 0; i < n - 1; i++)
      arr[i] = arr[i + 1];

    arr[n - 1] = temp;
  }
  void rightRotate(vector<int> &arr) {
    int n = arr.size();
    int temp = arr[n - 1];

    for (int i = n - 1; i > 0; i--)
      arr[i] = arr[i - 1];

    arr[0] = temp;
  }
};
