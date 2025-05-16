#include <iostream>
using namespace std;

class Solution
{
public:
    bool isPalindrome(int x)
    {
        if (x < 0)
        {
            return false;
        }

        int size = 0;
        int y = x;
        while (y != 0)
        {
            y = y / 10;
            size++;
        }
        int arr[size];
        y = x;

        for (int i = 0; i < size; i++)
        {
            arr[i] = y % 10;
            y = y / 10;
        }
        for (size_t i = 0; i < size / 2; i++)
        {
            if (arr[i] != arr[size - i - 1])
            {
                return false;
            }
        }
        return true;
    }
};
class Solutions
{
public:
    bool isPalindrome(int x)
    {
        // Negative numbers and numbers ending with 0 (but not 0 itself) are not palindromes
        if (x < 0 || (x % 10 == 0 && x != 0))
            return false;

        int reversedHalf = 0;

        // Reverse only half of the number
        while (x > reversedHalf)
        {
            reversedHalf = reversedHalf * 10 + x % 10;
            x /= 10;
        }

        // Check if first half == reversed second half (for even and odd digits)
        return (x == reversedHalf) || (x == reversedHalf / 10);
    }
};

int main()
{
    Solution X;
    int ip;
    cout << "Enter number to check for palindrome: ";
    cin >> ip;
    cout << X.isPalindrome(ip) << endl;

    return 0;
}