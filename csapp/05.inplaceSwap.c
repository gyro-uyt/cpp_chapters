#include "gyro.h"

void inplace_swap(int *x, int *y) {
  *y = *x ^ *y;
  *x = *x ^ *y;
  *y = *x ^ *y;
}
void reverse_array(int arr[], int cnt) {
  int first, last;
  for (first = 0, last = cnt - 1; first < last; first++, last--) {
    inplace_swap(&arr[first], &arr[last]);
  }
}

int main() {
  int a = 4, b = 7;
  printf("a: %d, b: %d\n", a, b);
  inplace_swap(&a, &b);
  printf("a: %d, b: %d\n", a, b);

  int arr[] = {1, 2, 3, 4, 5, 6};
  int cnt = sizeof(arr) / sizeof(arr[0]);

  printArray(arr, cnt);
  reverse_array(arr, cnt);
  printArray(arr, cnt);

  return 0;
}