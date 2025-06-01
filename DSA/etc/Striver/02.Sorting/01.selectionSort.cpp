#include <bits/stdc++.h>
// #include <iostream>
using namespace std;

int main() {

    int arr[] = {13, 46, 24, 52, 20, 9};
    int n = (sizeof(arr) / sizeof(arr[0]));

    // Print
    for(int i : arr) {
        cout << i << " ";
    }
    cout << endl;

    // minimum element
    for(int j = 0; j < n - 1; j++) {

        int min = arr[j];
        int ini = j;

        for(int i = j + 1; i < n; i++) {    // starts from j + 1 since j is already assumed to be the minimum.
            if(min > arr[i]) {
                min = arr[i];
                ini = i;
            }
        }

        // swap
        if(ini != j) {  // Added a check if (ini != j) before swapping (optional, but saves unnecessary swaps).
            int temp = arr[j];
            arr[j] = min;
            arr[ini] = temp;
        }
    }


    // Print
    for(int i : arr) {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}