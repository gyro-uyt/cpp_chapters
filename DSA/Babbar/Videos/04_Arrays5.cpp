//  Questions on Array part-1
/*
Q.1 Swap alternate
    i/p -> arr[5] = {1,2,7,8,4}
    0/p -> arr[5] = {2,1,8,7,4}

Q.2 Find unique
    i/p -> arr[5] = {2,3,1,6,3,6,2}
    0/p -> arr[5] = 1

*/
#include <iostream>
#include <utility>
using namespace std;

void swapAlternate(int *arr, int size) {

  for (int i = 0; i + 1 < size; i += 2) {
    swap(arr[i], arr[i + 1]);
  }
}

int findUnique(int *arr, int size) {
  // XOR method
  int unique = 0;
  for (int i = 0; i < size; i++) {
    unique ^= arr[i];
  }
  return unique;
}

void printArr(int *arr, int size) {
  for (int i = 0; i < size; i++) {
    cout << arr[i] << " ";
  }
  cout << endl;
}

int main() {
  int arr[] = {2, 3, 1, 1, 34, 6, 3, 6, 2};
  int size = sizeof(arr) / sizeof(arr[0]);

  //   printArr(arr, size);
  //   swapAlternate(arr, size);
  printArr(arr, size);
  cout << "Unique: " << findUnique(arr, size) << endl;

  return 0;
}

/*
Time Complexity = O(n2) as nested loops are there, not ideal
int index = 0;
while (index < size) {
    bool isUnique = true;
    for (int i = 0; i < size; i++) {
        if (i != index && arr[i] == arr[index]) {
            // Found duplicate → move to next index
            index++;
            isUnique = false;
            break; // restart with new index
        }
    }
    if (isUnique) {
        return arr[index]; // Found the unique element
    }
}
return -1; // No unique found (shouldn't happen if guaranteed)
*/