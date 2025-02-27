#include <iostream>
using namespace std;

void rightShift(int arr[], int n, int k)
{
    k = k % n;
    while (k--)
    {
        int temp = arr[n - 1];
        for (int i = n - 1; i > 0; i--)
            arr[i] = arr[i - 1];
        arr[0] = temp;
    }
}

void leftShift(int arr[], int n, int k)
{
    k = k % n;
    while (k--)
    {
        int temp = arr[0];
        for (int i = 0; i < n - 1; i++)
            arr[i] = arr[i + 1];
        arr[n - 1] = temp;
    }
}

void display(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int shift;

    cout << "Original Array: ";
    display(arr, n);

    cout << "Enter number of left shifts: ";
    cin >> shift;
    leftShift(arr, n, shift);
    cout << "After Left Shift: ";
    display(arr, n);

    cout << "Enter number of right shifts: ";
    cin >> shift;
    rightShift(arr, n, shift);
    cout << "After Right Shift: ";
    display(arr, n);

    return 0;
}
