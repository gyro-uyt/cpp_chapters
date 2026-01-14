#include <iostream>
using namespace std;

int power(int n) {
  if (n == 0)
    return 1;
  return 2 * power(n - 1);
}

void printCountdown(int n) {
  if (n == 0) {
    cout << n << endl;
    return;
  }
  cout << n << " ";
  printCountdown(n - 1); // Tail recursion
}

int main() {
  int n;
  cin >> n;
  printCountdown(n);
  cout << power(n) << endl;

  return 0;
}