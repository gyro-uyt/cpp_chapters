#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
  vector<int> sortedSquares(vector<int> &nums) {
    int s = 0;
    int e = nums.size() - 1;
    int k = nums.size() - 1;
    // largest absolute values are always at the edges in a sorted array
    vector<int> ans(nums.size());

    while (s <= e) {
      if (abs(nums[s]) >= abs(nums[e])) {
        ans[k] = nums[s] * nums[s];
        s++;
      } else {
        ans[k] = nums[e] * nums[e];
        e--;
      }
      k--;
    }
    return ans;
  }

  void printArr(vector<int> arr) {
    for (auto i : arr)
      cout << i << " ";
    cout << endl;
  }
};

int main() {
  Solution s1;
  vector<int> arr = {-4, -1, 0, 3, 10};
  s1.printArr(arr);
  vector<int> ans = s1.sortedSquares(arr);
  s1.printArr(ans);

  return 0;
}