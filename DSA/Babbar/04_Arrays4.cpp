#include <iostream>
using namespace std;

int linearSearch(int arr[], int size, int target) {
  for (int i = 0; i < size; i++) {
    if (arr[i] == target) {
      return i;
    }
  }
  return -1;
}

int main() {
  int array[] = {34, 73, 9, 7, 15, 84};

  cout << linearSearch(array, 6, 84) << endl;

  return 0;
}