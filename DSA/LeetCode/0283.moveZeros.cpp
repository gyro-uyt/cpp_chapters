#include <iostream>
#include <vector>
using namespace std;

class Solution {
  public:
    void moveZeroes(vector<int>& nums) {
        int pos = 0;
        int n = nums.size();

        for(int i = 0; i < n; i++) {
            if(nums[i] != 0) {
                nums[pos++] = nums[i];
            }
        }
        for(int i = pos; i < n; i++) {
            nums[i] = 0;
        }
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
    s1.moveZeroes(vec);
    pt(vec);

    return 0;
}