#include <iostream>
#include <iterator>
using namespace std;

int main() {
  int arr1[] = {5, 45, 23, 87, 8, 2, 5, 45, 5};
  int n, y = 0;
  bool run = false;
  cout << "Enter the number you want to search in arr1 ";
  cin >> n;

  for (int i = 0; i < size(arr1); i++) {
    if (arr1[i] == n) {
      cout<<"arr1["<<i<<"] matched\n";
      y++;
    }
  }

  if (y > 0) {
    cout << "User input-" << n << " matches the elements of arr1 " << y << "-time\n";
  } else {
    cout << "No such instance found in arr1\n";
  }

  return 0;
}
