#include <iostream>
using namespace std;

void printArr(int arr[], int size) {
  for (int i = 0; i < size; i++) {
    cout << arr[i] << " ";
  }
  cout << endl;
}
void update(int arr[], int size) {
      arr[1] = 120;
  printArr(arr, size);
}

int main() {

  int arr1[3] = {2, 5, 7};
  printArr(arr1, 3);

  update(arr1, 3);

  printArr(arr1, 3);

  return 0;
}