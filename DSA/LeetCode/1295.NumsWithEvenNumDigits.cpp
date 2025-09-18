#include <cmath>
#include <iostream>
#include <ostream>
#include <vector>
using namespace std;

class Solution {
public:
  int findNumbers(vector<int> &nums) {
    int count = 0;
    for (auto i : nums) {
      int digits = (int)log10(i) + 1;
      if (digits % 2 == 0)
        count++;
    }
    return count;
  }
};

int main() {
  Solution s1;
  vector<int> arr = {12, 345, 3, 4, 6, 7896};
  cout << s1.findNumbers(arr) << endl;

  return 0;
}
