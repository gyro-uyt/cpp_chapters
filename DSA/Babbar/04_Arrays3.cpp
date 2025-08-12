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
int arraySum(int arr[], int size){
  int sum=0;
  for (int i=0; i<size; i++) {
    sum+=arr[i];
  }
  return sum;
}

int main() {

  int arr1[3] = {2, 5, 7};
  printArr(arr1, 3);

  update(arr1, 3);

  // Normal variables → copy by default (pass-by-value)
  // Arrays → silently decay to pointers → effectively pass-by-reference behavior

  // here when we pass array it's the pointer address of the first element actually not the copy of the array
  printArr(arr1, 3);

  cout<<arraySum(arr1, 3)<<endl;

  return 0;
}