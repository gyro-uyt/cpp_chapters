#include <iostream>
using namespace std;

int binarySearch(int arr[], int size, int target) {
  int left = 0;
  int right = size - 1;

  while (left <= right) {
    int middle = left + (right - left) / 2;
    if (arr[middle] == target) {
      return middle;
    } else if (arr[middle] <= target) {
      right = middle - 1;
    } else {
      left = middle + 1;
    }
  }
  return -1;
}

int main() {
  int arr[] = {23, 234, 23, 42, 645, 34, 5};

  cout << binarySearch(arr, 7, 645) << endl;

  return 0;
}