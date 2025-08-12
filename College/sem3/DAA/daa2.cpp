// WAP to implement Binary search

#include <iostream>
using namespace std;

int binarySearch(int array[], int size, int target) {

  int index, left, right, middle;

  left = 0;
  right = size - 1;

  while (left <= right) {
    middle = left + (right - left) / 2;

    if (array[middle] == target) {
      return middle;
    } else if (array[middle] > target) {
      right = middle - 1;
    } else if (array[middle] < target) {
      left = middle + 1;
    }
  }
  return -1;
}

int main() {

  int arr[] = {2, 3, 6, 24, 54, 67, 78, 95};

  cout << binarySearch(arr, 8, 67) << endl;

  return 0;
}