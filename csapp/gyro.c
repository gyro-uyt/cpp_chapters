#include "gyro.h"

void inplaceSwap(int *x, int *y) {
  *y = *x ^ *y;
  *x = *x ^ *y;
  *y = *x ^ *y;
}

void reverseArray(int arr[], int cnt) {
  int first, last;
  for (first = 0, last = cnt - 1; first < last; first++, last--) {
    inplaceSwap(&arr[first], &arr[last]);
  }
}

void printArray(int arr[], int cnt) {
  for (int i = 0; i < cnt; i++) {
    printf("%d ", arr[i]);
  }
  printf("\n");
}