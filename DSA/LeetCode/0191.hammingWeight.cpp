#include <iostream>
using namespace std;

class Solution {
public:
  int optimal(int n) {
    int cnt = 0;
    while (n) {
      n = n & (n - 1);
      cnt++;
    }
    return cnt;
  }
  int better(int n) {
    int count = 0;
    while (n != 0) {
      // checking each bit
      count += n & 1;
      n = n >> 1;
    }
    return count;
  }
};

int main() {
  Solution s1;
  cout << s1.optimal(128) << endl;

  return 0;
}