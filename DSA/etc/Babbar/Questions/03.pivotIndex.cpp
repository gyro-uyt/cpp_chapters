#include <iostream>
#include <vector>
using namespace std;

int pivotIndex(vector<int> arr) {
  int left = 0, right = arr.size() - 1;
  while (left < right) {
    int mid = left + (right - left) / 2;
    if (arr[mid] >= arr[0]) {
      left = mid + 1;
    } else {
      right = mid;
    }
  }
  return left;
}

int main() {
  cout << "HW: Find pivot in an array" << endl;
  // this is a rotated array
  vector<int> arr = {5, 7, 8, 0, 1, 2, 3, 4};
  cout << "Pivot index is " << pivotIndex(arr) << " and element is "
       << arr[pivotIndex(arr)] << endl;

  return 0;
}