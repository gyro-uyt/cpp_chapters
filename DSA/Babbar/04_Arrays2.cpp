#include <climits>
#include <iostream>
using namespace std;

int getMax(int arr[], int size) {
  int maximum = INT_MIN;
  // INT_MIN is the smallest integer possible i.e., 2^-31
  for (int i = 0; i < size; i++) {
    // max function returns the maximum number of the given parameters
    maximum = max(maximum, arr[i]);
    // if (arr[i] >= maximum) {
    //   maximum = arr[i];
    // }
  }
  return maximum;
}
int getMin(int arr[], int size) {
  int min = INT_MAX;
  for (int i = 0; i < size; i++) {
    if (arr[i] <= min) {
      min = arr[i];
    }
  }
  return min;
}

int main() {

  // taking size of an array as a variable is such a bad practice, that
  // taking 1,00,000 as array size is still better than it

  int arr[1000];
  int size;
  cout << "Enter the size of the array: ";
  cin >> size;

  for (int i = 0; i < size; i++) {
    // cout << "Enter element for arr[" << i << "]: ";
    cin >> arr[i];
  }
  // You can type mutliple element with a space

  cout << "Max-element: " << getMax(arr, size) << endl;
  cout << "Min-element: " << getMin(arr, size) << endl;

  return 0;
}