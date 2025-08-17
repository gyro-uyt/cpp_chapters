#include <iostream>
using namespace std;

int findmax(int* arr, int size)
{
    int max = *arr;  // Initialize max with the first element
    for (int i = 1; i < size; i++)  // Start from index 1
    {
        if (*(arr + i) > max)  // Compare using pointer arithmetic
        {
            max = *(arr + i);
        }
    }
    return max;
}

int main()
{
    int size;
    cout << "Enter size of the array: ";
    cin >> size;

    if (size <= 0)  // Prevents invalid array sizes
    {
        cout << "Invalid size!";
        return 1;
    }

    int arr[size];  // Variable-length array (VLA) in C++ (not standard in older versions)
    cout << "Enter " << size << " elements of the array:" << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    int max = findmax(arr, size);
    cout << "The maximum number in the array is: " << max << endl;

    return 0;
}
