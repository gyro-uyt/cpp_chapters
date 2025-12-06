#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
  bool isPrime(int n) {
    if (n < 2)
      return false;
    for (int i = 2; i * i <= n; i++)
      if (n % i == 0)
        return false;
    return true;
  }
  bool completePrime(int num) {
    string str = to_string(num);
    int len = str.size();

    for (int i = 1; i <= len; i++) {
      int prefix = stoi(str.substr(0, i));
      if (!isPrime(prefix))
        return false;
    }

    for (int i = 0; i < len; i++) {
      int suffix = stoi(str.substr(i, len - i));
      if (!isPrime(suffix))
        return false;
    }

    return true;
  }
};
