#include <iostream>
using namespace std;

int gcd(int a, int b) {
  /*
  while (a > 0 && b > 0) {
    if (a > b)
      a = a % b;
    else
      b = b % a;
    if (a == 0)
      return b;
    else
      return a;
  }
  return -1;
  */
  while (b != 0) {
    int tmp = b;
    b = a % b;
    a = tmp;
  }
  return a;
}
int main() {
  cout << gcd(3, 9) << endl;
  cout << gcd(0, 5) << endl;
  cout << gcd(90, 30) << endl;
  cout << gcd(0, 0) << endl;
  cout << gcd(49, 50) << endl;
  cout << gcd(1, 7) << endl;
}
