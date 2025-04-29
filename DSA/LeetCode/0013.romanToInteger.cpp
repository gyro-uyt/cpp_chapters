#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    int romanToInt(string s)
    {
        int ans = 0;
        int value;
        vector<int> vec;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == 'I')
                vec.push_back(1);
            else if (s[i] == 'V')
                vec.push_back(5);
            else if (s[i] == 'X')
                vec.push_back(10);
            else if (s[i] == 'L')
                vec.push_back(50);
            else if (s[i] == 'C')
                vec.push_back(100);
            else if (s[i] == 'D')
                vec.push_back(500);
            else if (s[i] == 'M')
                vec.push_back(1000);
        }
        for (int i = 0; i < vec.size(); i++)
        {
            if (i + 1 < vec.size() && vec[i] < vec[i + 1]) // subtraction case
            {
                ans = ans + vec[i + 1] - vec[i];
                i++;
            }
            else // normal case
                ans += vec[i];
        }
        return ans;
    }
};

int main()
{
    int value;
    Solution s1;
    value = s1.romanToInt("MCMXCIV"); // 1994, !2216
    cout << value << endl;

    return 0;
}