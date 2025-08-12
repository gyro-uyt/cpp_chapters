#include "utils.h"
#include <iostream>
using namespace std;

void printArray(int arr[], int size) {
  for (int i = 0; i < size; i++) {
    cout << arr[i] << " ";
  }
  cout << endl;
}

void reverseArray(int arr[], int size) {
  int left = 0;
  int right = size - 1;
  while (left <= right) {
    swap(arr[left], arr[right]);
    left++;
    right--;
  }
}