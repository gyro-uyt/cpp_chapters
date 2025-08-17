// make a program to left/right shift
#include <iostream>
using namespace std;

void printArray(int array[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << array[i] << " ";
    }
    cout << endl;
}

void leftShift(int array[], int size, int shift)
{
    for (int i = 0; i < shift; i++)
    {
        int temp = array
        [0];
        for (int i = 0; i < size; i++)
        {
            if (i == size - 1)
            {
                array[i] = temp;
            }
            else
            {
                array[i] = array[i + 1];
            }
        }
    }
}

int main()
{
    int arr1[5] = {1, 2, 3, 4, 5};
    int size1 = sizeof(arr1) / sizeof(arr1[0]); // shows the number of elements of array
    int shift;
    cout << "How many left shifts to do: ";
    cin >> shift;

    cout << "Original array: ";
    printArray(arr1, size1);

    // left-shift
    leftShift(arr1, size1, shift);
    
    cout << "After " << shift << " shift/s: ";
    printArray(arr1, size1);

    return 0;
}