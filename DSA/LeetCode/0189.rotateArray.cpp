#include <algorithm>
#include <bits/stdc++.h>
#include <vector>
using namespace std;

class Solution {
public:
  void rotate(vector<int> &nums, int k) {
    int n = nums.size();
    k %= n;
    reverse(nums.begin(), nums.end());
    reverse(nums.begin(), nums.begin() + k);
    reverse(nums.begin() + k, nums.end());
  }
  void rotate1(vector<int> &nums, int k) {
    int n = nums.size();
    k = k % n;
    for (int i = 0; i < k; i++) {
      int last = nums[n - 1];
      nums.pop_back();
      nums.insert(nums.begin(), last);
    }
  }

  void print(vector<int> nums) {
    for (int i = 0; i < nums.size(); i++)
      cout << nums[i] << " ";
    cout << endl;
  }
};
int main() {
  Solution s;
  vector<int> n = {1, 2, 3, 4, 5, 6};
  // cout << *n.begin() << endl;
  s.print(n);
  s.rotate(n, 8);
  s.print(n);
}
