#include <iostream>
#include <vector>
using namespace std;

// Given an integer array nums and an integer val, remove all occurrences of val in nums in-place.
// The order of the elements may be changed. Then return the number of elements in nums which are not equal to val.

class Solution {
  public:
    int removeElement(vector<int>& nums, int val) {

        for(vector<int>::iterator itr = nums.begin(); itr < nums.end();) {
            if(*itr == val) {
                itr = nums.erase(itr);  // erase() returns the next valid iterator (i.e., the element that comes after the one erased).
            } else
                itr++;
        }
        return nums.size();
    }
};

void pt(vector<int> &nums) {
    for(vector<int>::iterator it = nums.begin(); it < nums.end(); it++) {
        cout << *(it) << " ";
    }
    cout << endl;
}

int main() {
    vector<int> vec1 = {0, 1, 2, 2, 3, 0, 4, 2};
    int val1 = 2;

    Solution s1;
    s1.removeElement(vec1, val1);

    pt(vec1);

    // vector<int>::iterator itr = vec1.begin();
    // vec1.erase(itr + 2);
    // pt(vec1);
    // vec1.erase(itr + 2);
    // pt(vec1);
    // vec1.erase(itr + 5);
    // pt(vec1);


    return 0;
}