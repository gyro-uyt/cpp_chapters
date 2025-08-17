#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    string inp;
    cout << "Enter the string/word: ";
    cin >> inp;
    cout << inp << endl;
    reverse(inp.begin(), inp.end());
    cout << inp << endl;

    return 0;
}