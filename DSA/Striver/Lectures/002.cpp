#include <bits/stdc++.h>
#include <cmath>
using namespace std;

int main() {
  int n = 123456;
  int ans = 0;
  int digits = log10(n) ;
  int i = pow(10, digits);
  while (n > 0) {
    ans += (n % 10) * i;
    n /= 10;
    i /= 10;
  }
  cout << ans << endl;

  return 0;
}