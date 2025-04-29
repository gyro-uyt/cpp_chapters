#include <iostream>
#include <vector>
using namespace std;

vector<int> convert(string s)
{
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
    return vec;
}
int main()
{
    string s1 = "XVI";
    vector<int> v1 = convert(s1);
    for(int val: v1)
        cout<<val<<" ";
    cout<<endl;
    cout<<v1[1]<<endl;
    return 0;
}