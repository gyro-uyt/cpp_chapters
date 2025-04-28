/*
167. Two Sum II - Input Array is sorted

Given a 1-indexed array of integers numbers that is already sorted in non-decreasing order, find two numbers such that they add up to a specific target number.
Let these two numbers be numbers[index1] and numbers[index2] where 1 <= index1 < index2 <= numbers.length.
Return the indices of the two numbers, index1 and index2, added by one as an integer array [index1, index2] of length 2.

The tests are generated such that there is exactly one solution. You may not use the same element twice.
Your solution must use only constant extra space.

Example:
Input: numbers = [2,7,11,15], target = 9
Output: [1,2]
Explanation: The sum of 2 and 7 is 9. Therefore, index1 = 1, index2 = 2. We return [1, 2].
*/
#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    vector<int> twoSum(vector<int> &numbers, int target)
    {
    }
};

int main()
{
    int arr[4] = {2, 7, 11, 15};
    int size = 4;
    int target;
    cout << "Enter the target: ";
    cin >> target;
    bool found = false;

    for (size_t i = 0; i < size; i++)
    {
        int *ptr1 = &arr[i];
        for (size_t p = 0; p < size; p++)
        {
            int *ptr2 = &arr[p];
            if (i == p)
                continue;
            if (*ptr1 + *ptr2 == target)
            {
                found = true;
                cout << "Found: " << *ptr1 << " + " << *ptr2 << " = " << target << endl;
                break;
            }
        }
        if (found)
            break;
    }
    if (!found)
    {
        cout<<"No such pair Exists"<<endl;
    }
    
    return 0;
}

// for (size_t i = 0; i < size; i++)
// {
//     for (size_t p = 0; p < size; p++)
//     {
//         if (ptr1 == ptr2)
//         {
//             ptr2++;
//             continue;
//         }
//         if (*ptr1 + *ptr2 == target)
//         {
//             found = true;
//             break;
//         }
//         ptr2++;
//     }
//     if (found)
//         break;
//     ptr2 = &arr[0];
//     ptr1++;
// }