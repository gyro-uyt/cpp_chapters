// WAP to implement insertion sort
// WAP to implement selection sort
// WAP to implement bubble sort

#include <iostream>
using namespace std;

void inerstionSort(int *arr, int size) {

  for (int i = 1; i < size; i++) {
    int temp = arr[i];
    int j = i - 1;
    while (j >= 0 && arr[j] > temp) {
      arr[j + 1] = arr[j];
      j--;
    }
    arr[j + 1] = temp;
  }
}

void selectionSort(int *arr, int size) {
  for (int i = 0; i < size-1; i++) {
    int min = arr[0];
    for (int j = i; j < size; j++) {
      if (min > arr[j]) {
        min = arr[j];
      }
    }
  }
}

void printArr(int *arr, int size) {
  for (int i = 0; i < size; i++) {
    cout << arr[i] << " ";
  }
  cout << endl;
}

int main() {

  int arr[] = {5, 3, 4, 1, 2};
  printArr(arr, 5);
  //   inerstionSort(arr, 5);
  selectionSort(arr, 5);
  printArr(arr, 5);

  return 0;
}

/*
Selection Sort
    1. Start with the second element (index 1) and compare it with the first
element.
    2. If the second element is smaller, swap them.
    3. Move to the next element and compare it with all previous elements
shifting elements to the RIGHT until the correct position is found.
    4. Repeat until the entire array is sorted.

*/