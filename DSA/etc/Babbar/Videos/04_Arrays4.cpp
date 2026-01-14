// Print array, reverse array, linear search array

#include <iostream>
using namespace std;

void printArray(int arr[], int size) {
  for (int i = 0; i < size; i++) {
    cout << arr[i] << " ";
  }
  cout << endl;
}

int linearSearch(int arr[], int size, int target) {
  for (int i = 0; i < size; i++) {
    if (arr[i] == target) {
      return i;
    }
  }
  return -1;
}

void reverseArray(int arr[], int size) {
  int left = 0;
  int right = size - 1;
  while (left <= right) {
    int temp = arr[right];
    arr[right] = arr[left];
    arr[left] = temp;
    left++;
    right--;
  }
}

int main() {
  int array[] = {1, 3, 5, 7, 9};
  int size = sizeof(array) / sizeof(array[0]);
  cout << "Size: " << size << endl;
  cout << linearSearch(array, size, 84) << endl;

  printArray(array, size);
  reverseArray(array, size);
  printArray(array, size);

  return 0;
}