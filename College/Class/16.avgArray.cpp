#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter number of Boys ";
    cin >> n;
    int height[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Enter the height of the Boy" << (i + 1) << ": ";
        cin >> height[i];
    }
    int sum = 0;
    for (int p = 0; p < n; p++)
    {
        sum = sum + height[p];
    }
    float avg = (sum / n);
    cout << "Average of the Height of the Boys is " << avg << endl;
    float y = 3.0 / 2;
    cout << y << endl;
    return 0;
}
/*
the getline function allows you to receive and read strings including multi-line strings from an input string
*/