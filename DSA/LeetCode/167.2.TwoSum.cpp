#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    vector<int> twoSum(vector<int> &numbers, int target)
    {
        int left = 0;
        int right = numbers.size() - 1;

        while (left < right)
        {
            int sum = numbers[left] + numbers[right];

            if (sum == target)
                return {left, right};
            else if (sum < target)
                left++;
            else
                right--;
        }
        return {}; // returns empty vector if no match found
    }
};

int main()
{
    // int numbers[] = {2, 7, 11, 15};
    vector<int> numbers = {2, 7, 11, 15};
    int target;
    cout << "Give the target: ";
    cin >> target;
    Solution obj;
    vector<int> result = obj.twoSum(numbers, target);
    if (!result.empty())
    {
        cout << "Indices: " << result[0] << " and " << result[1] << " = " << target << endl;
    }
    else
    {
        cout << "No such pair found" << endl;
    }

    return 0;
}