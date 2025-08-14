#include <iostream>
using namespace std;

int binarySearch(int arr[], int size, int target) {
  int left = 0;
  int right = size - 1;

  while (left <= right) {
    int middle = left + (right - left) / 2;
    if (arr[middle] == target) {
      return middle;
    } else if (arr[middle] < target) {
      left = middle + 1;
    } else {
      right = middle - 1;
    }
  }
  return -1;
}

int main() {
  int arr[] = {1, 4, 6, 9, 34, 68, 80, 235, 6798};

  cout << binarySearch(arr, 9, 6798) << endl;

  return 0;
}