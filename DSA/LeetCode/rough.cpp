#include <bits/stdc++.h>
#include <unordered_map>
#include <vector>
using namespace std;

void pv(vector<int> arr) {
  for (int i : arr)
    cout << i << " ";
  cout << endl;
}
void removeDuplicates(vector<int> &nums) {
  int n = nums.size();
  int unique = 0;
  for (int i = 0; i < n - 1; i++) {
    int j = i + 1;
    while (nums[j] == nums[i] && j < n) {
      nums[j] = -200;
      unique++;
      j++;
    }
  }
  cout << unique << endl;
}
// Input: nums = [0,0,1,1,1,2,2,3,3,4]
// Output: 5, nums = [0,1,2,3,4,_,_,_,_,_]
int main() {
  vector<int> nums = {0, 0, 1, 1, 1, 2, 2, 3, 3, 4};
  // pv(nums);
  // removeDuplicates(nums);
  // pv(nums);

  unordered_map<int, int> f;
  for (int i = 0; i < nums.size(); i++) {
    f[nums[i]]++;
    cout << nums[i] << " - " << f[nums[i]] << endl;
  }

  for (auto it : f)
    cout << it.first << " occured " << it.second << " times" << endl;

  return 0;
}
