#include <iostream>
#include <vector>
using namespace std;

class Solution {
  public:
    int removeDuplicates(vector<int>& nums) {

        for(vector<int>::iterator itr = nums.begin(); itr < nums.end();) {

            if((itr + 1) != nums.end() && *itr == *(itr + 1))   // Always check (itr + 1) != nums.end() first
                itr = nums.erase(itr);
            else
                itr++;
        }
        return nums.size();
    }
};

int main() {

    return 0;
}