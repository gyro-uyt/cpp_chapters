#include <iostream>
#include <vector>
using namespace std;

int totalOccurance(vector<int> &arr, int target) {
  int totalOccurance = 0;

  int size = arr.size();
  int left = 0, right = size - 1, middle;
  int first = -1, last = -1;

  // left part
  while (left <= right) {
    middle = left + (right - left) / 2;
    if (arr[middle] == target) {
      first = middle;
      right = middle - 1;
    } else if (target > arr[middle]) {
      left = middle + 1;
    } else {
      right = middle - 1;
    }
  }

  // right part
  left = 0, right = size - 1;
  while (left <= right) {
    middle = left + (right - left) / 2;
    if (arr[middle] == target) {
      last = middle;
      left = middle + 1;
    } else if (target > arr[middle]) {
      left = middle + 1;
    } else {
      right = middle - 1;
    }
  }
  if (first == -1) {
    return 0;
  }
  totalOccurance = last - first + 1;
  return totalOccurance;
}

int main() {

  vector<int> arr = {1, 2, 3, 3, 3, 3, 5};

  int target = 3;
  cout << "Total occurances of " << target << " is "
       << totalOccurance(arr, target) << endl;

  return 0;
}

/*
Wrong Approach, bcz
  Binary search doesn’t move one step at a time.
  It jumps to midpoints, eliminating half of the search space each time.
  That means it might “skip over” duplicates.

// left part
while (left <= right) {
  middle = left + (right - left) / 2;
  if (arr[middle] == target) {
    totalOccurance++;
    right = middle - 1;
  } else if (target > arr[middle]) {
    left = middle + 1;
  } else {
    right = middle - 1;
  }
}

// right part
left = 0, right = size - 1;
while (left <= right) {
  middle = left + (right - left) / 2;
  if (arr[middle] == target) {
    totalOccurance++;
    left = middle + 1;
  } else if (target > arr[middle]) {
    left = middle + 1;
  } else {
    right = middle - 1;
  }
}
*/