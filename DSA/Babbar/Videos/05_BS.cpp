#include <iostream>
using namespace std;

// Binary Search => Time Complexity = O(log n) which is much better than LS
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

// Linear Search => Time Complexity = O(n)
int linearSearch(int arr[], int size, int target) {
  for (int i = 0; i < size; i++) {
    if (arr[i] == target) {
      return i;
    }
  }
  return -1;
}

int main() {
  int arr[] = {1, 4, 6, 9, 34, 68, 80, 235, 6798};

  cout << linearSearch(arr, 9, 6798) << endl;
  cout << binarySearch(arr, 9, 6798) << endl;

  return 0;
}