#include <iostream>
#include <vector>
using namespace std;

class Solution {
  public:
    vector<int> applyOperations(vector<int>& nums) {

        for(vector<int>::iterator it = nums.begin(); it < nums.end();it++) {

            if((it + 1) != nums.end() && *(it) == *(it + 1)) {
                *it = 2 * (*it);
                *(it + 1) = 0;
            }
        }

        int count = 0;
        for(vector<int>::iterator itr = nums.begin(); itr < nums.end();) {
            if(*itr == 0) {
                itr = nums.erase(itr);
                count++;
            } else
                itr++;
        }
        for(int i = 0; i < count; i++) {
            nums.push_back(0);
        }

        return nums;
    }

// Index-based better method
    vector<int> applyOperations1(vector<int>& nums) {
        int n = nums.size();
    
        // Step 1: Apply the operation
        for (int i = 0; i < n - 1; i++) {
            if (nums[i] == nums[i + 1]) {
                nums[i] *= 2;
                nums[i + 1] = 0;
            }
        }
    
        // Step 2: Move non-zero elements to the front
        int pos = 0;
        for (int i = 0; i < n; i++) {
            if (nums[i] != 0) {
                nums[pos++] = nums[i];
            }
        }
    
        // Step 3: Fill the rest with 0s
        for (int i = pos; i < n; i++) {
            nums[i] = 0;
        }
    
        return nums;
    }
    
};
void pt(vector<int> &vec) {
    for(vector<int>::iterator itr1 = vec.begin(); itr1 < vec.end(); itr1++) {
        cout << *itr1 << " ";
    }
    cout << endl;
}

int main() {
    vector<int> vec = {1, 0, 2, 2, 0, 1, 1};


    pt(vec);
    Solution s1;
    vector<int> vec1 = s1.applyOperations(vec);
    pt(vec1);

    return 0;
}

/*
You are given a 0-indexed array nums of size n consisting of non-negative integers.
You need to apply n - 1 operations to this array where, in the ith operation (0-indexed), you will apply the following on the ith element of nums:
If nums[i] == nums[i + 1], then multiply nums[i] by 2 and set nums[i + 1] to 0. Otherwise, you skip this operation.
After performing all the operations, shift all the 0's to the end of the array.
For example, the array [1,0,2,0,0,1] after shifting all its 0's to the end, is [1,2,1,0,0,0].

Return the resulting array.
Note that the operations are applied sequentially, not all at once.
*/
// ?How do you shift zero's to the end
// int count = 0;
// for(vector<int>::iterator itr = vec.begin(); itr < vec.end();) {
//     if(*itr == 0) {
//         itr = vec.erase(itr);
//         count++;
//     } else
//         itr++;
// }
// for(int i = 0; i < count; i++) {
//     vec.push_back(0);
// }