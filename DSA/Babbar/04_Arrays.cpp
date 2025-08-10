#include <iostream>
using namespace std;

void printArr(int arr[], int sizeOfArr) {

  for (int i = 0; i < sizeOfArr; i++) {
    cout << arr[i] << " ";
  }
  cout << endl;
}

int main() {

  int arr1[] = {1, 54, 3, 63, 34};

  int garbage[100];
  // array of 100 elements containing garbage values

  int zero[100] = {0};
  // array of 100 elements with all containing 0 as the value

  cout << garbage[56] << endl;
  cout << zero[23] << endl;

  // how to initialise an entire array with a particular value?

  printArr(arr1, 5);

  int halfFilled[10] = {23, 23, 2, 24, 34};
  printArr(halfFilled, 10);
  // if an array is half-filled only then rest of array elements becomes filled
  // with Zero

  // This formula has a fatal flow, it fails for arrays like "halfFilled"
  int numOfElements = sizeof(arr1) / sizeof(int);
  cout << numOfElements << endl;

  return 0;
}