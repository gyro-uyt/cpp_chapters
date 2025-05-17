/*
"The ability to halve a number again and again until it becomes 1 is what we define as log base 2 of that number."

    Linear search: O(n) → 1 step per item.
    Binary search: O(log₂ n) → divide-and-conquer, 1 step per halving

    Worst case of binary search is when you have to halve maximum number of times,
        like for: 100 -> 50 -> 25 -> 12.5 -> 6.25 -> 3.125 -> 1.5625 -> 0.78125     => 6 times = log base 2 of 100
                16 -> 8 -> 4 -> 2 -> 1    => 4 times = log base 2 of 16
                8 -> 4 -> 2 -> 1          => 3 times = log base 2 of 8
                4 -> 2 -> 1               => 2 times = log base 2 of 4
                2 -> 1                    => 1 time = log base 2 of 2

    O(1) > O(log n) >> O(n)
        (log n) time complexity is much better than (n) as when with the increase of 'n'(sample) the log icreases very slowly

*/
#include <iostream>
using namespace std;

class Methods {
  public:
    int linearSearch(int arry[], int size, int element) {
        for(int i = 0; i < size; i++) {
            if(arry[i] == element) {
                return i;
            }

        }
        return -1;
    }
    int binarySearch(int arry[], int size, int element) {
        int low, mid, high;
        low = 0;
        high = size - 1;
        // searching starts
        while(low <= high) {
            mid = (low + high) / 2;
            if(arry[mid] == element)
                return mid;
            if(element < arry[mid])
                high = mid - 1;
            if(element > arry[mid])
                low = mid + 1;
        }
        // searching ends
        return -1;
    }
};

int main() {

    // Only condition for Binary Search is Sorted Array
    int arr[] = {2, 5, 6, 7, 23, 45, 56, 68, 100, 244, 676};
    int size = sizeof(arr) / sizeof(arr[0]);
    int element = 5;
    Methods m1;
    cout << "The element " << element << " was found at index " <<
         m1.binarySearch(arr, size, element) << endl;

    return 0;
}