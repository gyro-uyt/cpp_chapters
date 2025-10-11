#include <iostream>
using namespace std;

int factorial(int n) {
  if (n == 0)
    return 1;

  //   int smallProblem = factorial(n - 1);
  //   int bigProblem = n * smallProblem;
  //   return bigProblem;
  return n * factorial(n - 1);
}

int main() {
  cout << "Input: ";
  int n;
  cin >> n;
  cout << "factorial: " << factorial(n) << endl;

  return 0;
}