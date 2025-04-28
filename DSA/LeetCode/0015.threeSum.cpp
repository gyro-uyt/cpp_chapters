#include <iostream>
#include <vector>
#include <algorithm> // sort
using namespace std;

class Solution
{
public:
    vector<vector<int>> threeSum(vector<int> &nums)
    {
        sort(nums.begin(), nums.end());
        vector<vector<int>> result = {};
        for (int i = 0; i < nums.size(); i++)
        {
            if (i > 0)
            {
                if (nums[i] == nums[i - 1])
                {
                    continue;
                }
            }
            int left = i + 1;
            int right = nums.size() - 1;
            while (left < right)
            {
                int sum = nums[i] + nums[left] + nums[right];
                if (sum == 0)
                {
                    result.push_back({nums[i], nums[left], nums[right]});
                    left++;
                    right--;
                    
                    while (left < right && nums[left] == nums[left - 1])
                        left++;
                    while (left < right && nums[right] == nums[right + 1])
                        right--;
                }
                else if (sum < 0)
                    left++;
                else
                    right--;
            }
        }
        return result;
    }
};

int main()
{
    vector<int> vec = {-1, 0, 1, 2, -1, -4};

    vector<vector<int>> print;
    Solution s1;
    print = s1.threeSum(vec);
    for (int i = 0; i < print.size(); i++)
    {
        for (int j = 0; j < print.size(); j++)
        {
            cout << print[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;

    return 0;
}