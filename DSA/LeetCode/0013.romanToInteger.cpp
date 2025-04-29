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
            if (vec[i]<vec[i+1])    // subtraction case
            {
                
            }
            else    // normal case
            {
                
            }
            
        }
        
        

        // for (int i = 0; i < s.size(); i++)
        // {
        //     if (s[i] >= s[i + 1])
        //     {
        //         if (s[i] == 'I')
        //             value = 1;
        //         else if (s[i] == 'V')
        //             value = 5;
        //         else if (s[i] == 'X')
        //             value = 10;
        //         else if (s[i] == 'L')
        //             value = 50;
        //         else if (s[i] == 'C')
        //             value = 100;
        //         else if (s[i] == 'D')
        //             value = 500;
        //         else if (s[i] == 'M')
        //             value = 1000;
        //     }
        //     else
        //     {
        //         if (s[i] == 'I' && s[i + 1] == 'V')
        //             value = -1; // initially i setted value=4, but then for the next iteration V comes which adds 5, either skip or set value=-1
        //         else if (s[i] == 'X' && s[i + 1] == 'L')
        //             value = -10;
        //         else if (s[i] == 'C' && s[i + 1] == 'D')
        //             value = -100;
        //     }
        //     ans = ans + value;
        // }
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