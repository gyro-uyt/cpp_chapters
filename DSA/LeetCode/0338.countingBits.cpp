#include <string>
#include <vector>
using namespace std;

/*
eg.,
  input: n = 5
  Output: [0,1,1,2,1,2]
  Explanation:
  0 --> 0
  1 --> 1
  2 --> 10
  3 --> 11
  4 --> 100
  5 --> 101
*/
class Solution {
public:
  // method-2 DP more efficient O(n)
  vector<int> M2countBits(int n) {
    vector<int> ans(n + 1);
    ans[0] = 0; // base case

    for (int i = 1; i <= n; i++) {
      ans[i] = ans[i >> 1] + (i & 1);
    }

    return ans;
  }
  // method-1 O(n logn)
  string numTOBin(int num) {
    if (num == 0) {
      return "0";
    }

    string binary = "";
    while (num > 0) {
      binary = (num % 2 == 0 ? "0" : "1") + binary;
      num /= 2;
    }
    return binary;
  }
  vector<int> countBits(int n) {
    vector<int> ans(n + 1);
    for (int i = 0; i <= n; i++) {
      string s = numTOBin(i);
      int count = 0;
      for (auto i : s) {
        if (i == '1')
          count++;
      }
      ans[i] = count;
    }
    return ans;
  }
};
