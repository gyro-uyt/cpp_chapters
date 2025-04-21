#include <iostream>
#include <vector>

using namespace std;

vector<int> twoSum(vector<int> &numbers, int target)
{
    int left = 0;
    int right = numbers.size() - 1;

    while (left < right)
    {
        int sum = numbers[left] + numbers[right];

        if (sum == target)
            return {left + 1, right + 1}; // 1-based indexing
        else if (sum < target)
            left++;
        else
            right--;
    }

    return {}; // No solution found
}

int main()
{
    vector<int> numbers = {2, 7, 11, 15};
    int target = 9;

    vector<int> result = twoSum(numbers, target);

    if (!result.empty())
    {
        cout << "Indices: " << result[0] << " and " << result[1] << endl;
    }
    else
    {
        cout << "No pair found." << endl;
    }

    return 0;
}
