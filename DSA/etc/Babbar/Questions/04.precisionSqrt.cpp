long long int sqrtInteger(int x) {
  if (x == 0) {
    return x;
  }
  int s = 1, e = x;
  long long int ans = -1;
  while (s <= e) {
    long long int mid = s + (e - s) / 2;
    long long int square = mid * mid;
    if (square == x) {
      return mid;
    } else if (square < x) {
      ans = mid;
      s = mid + 1;
    } else {
      e = mid - 1;
    }
  }
  return ans;
}

double sqrtDecimal(int x, int precision, int intPart) {
  double factor = 1;
  double ans = intPart;

  for (int i = 0; i < precision; i++) {
    factor /= 10;

    for (double j = ans; j * j < x; j += factor) {
      ans = j;
    }
  }
  return ans;
}
#include <iostream>
using namespace std;

int main() {
  int target = 24;
  cout << sqrtDecimal(target, 10, sqrtInteger(target)) << endl;

  return 0;
}