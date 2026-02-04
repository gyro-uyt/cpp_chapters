#include <bits/stdc++.h>
using namespace std;

void optimal(vector<int> &arr) {
  int n = arr.size();
  int j = 0;
  for (int i = 0; i < n; i++)
    if (arr[i] != 0)
      arr[j++] = arr[i];

  while (j < n)
    arr[j++] = 0;
}

void striver(vector<int> &arr) {
  int n = arr.size();

  int j = -1;
  for (int i = 0; i < n; i++)
    if (arr[i] == 0) {
      j = i;
      break;
    }
  if (j == -1)
    return;
  for (int i = j + 1; i < n; i++)
    if (arr[i] != 0)
      swap(arr[i], arr[j++]);
}

void bruteForce(vector<int> &arr) {
  vector<int> temp;
  for (int num : arr)
    if (num != 0)
      temp.push_back(num);
  for (int i = 0; i < arr.size(); i++)
    arr[i] = (i < temp.size()) ? temp[i] : 0;
}
