#include <iostream>
using namespace std;

int main()
{
    int add = 0;
    int n;
    cout << "How many numbers do you have: ";
    cin >> n;
    int sum[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Enter num" << (i + 1) << ": ";
        cin >> sum[i];
    }
    cout << endl;
    for (int i = 0; i < n; i++)
    {
        cout << "Entered num" << (i + 1) << " is: " << sum[i] << endl;
    }
    cout << endl;
    for (int i = 0; i < n; i++)
    {
        add = add + sum[i];
    }
    cout << "Sum of the Entered numbers are: " << add << endl;
    
    return 0;
}