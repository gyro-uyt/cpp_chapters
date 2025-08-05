// WAP to implement Linear Search

#include <iostream>
using namespace std;

int main() {

  int arr[] = {23, 34, 32, 25, 57, 23};

  bool match = false;
  int search;
  cout << "Enter the Number to search for: ";
  cin >> search;

  for (int i = 0; i < 6; i++) {
    if (arr[i] == search) {
      cout << "Match Found at index-" << i << endl;
      match = true;
      break;
    }
  }
  if (!match) {
    cout << "Given element not found at any index" << endl;
  }

  return 0;
}