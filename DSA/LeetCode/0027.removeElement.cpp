#include <iostream>
#include <vector>
using namespace std;

// Given an integer array nums and an integer val, remove all occurrences of val in nums in-place.
// The order of the elements may be changed. Then return the number of elements in nums which are not equal to val.

class Solution {
  public:
    int removeElement(vector<int> &nums, int val) {
        int ini_num_of_elements = nums.size();
        for(int i = 0; i < ini_num_of_elements; i++) {
            if(nums[i] == val)
                nums.pop_back();
        }
    }
};

int main() {
    vector<int> vec1 = {0, 1, 2, 2, 3, 0, 4, 2};
    int val1 = 2;

    Solution s1;
    int n = s1.removeElement(vec1, val1);
    cout << n << endl;

    return 0;
}