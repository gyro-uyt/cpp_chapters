#include <iostream>
using namespace std;

int Garray[10000000];   // in Global, upto 1e7 is allowed

int main() {

    int size_of_array;
    cout << "Enter size of array: ";
    cin >> size_of_array;
    int arr[size_of_array];
    cout << "Enter elements of array;" << endl;
    for(int i = 0; i < size_of_array; i++) {

        cin >> arr[i];
    }

    // Pre-Compute
    int hash[13] = {0};
    for(int i = 0; i < size_of_array; i++) {

        hash[arr[i]] += 1;
    }

    // query    --> number of times to search for
    int q;
    cout << "enter number of queries: ";
    cin >> q;
    while(q--) {

        int number;
        cout << "Enter the number to search: ";
        cin >> number;
        // fetch
        cout << "'" << number << "' has appeared " << hash[number] << " of times." << endl;
    }

    int array[1000000]; // allowed upto 1e6 == 10^6
    // int array1[10000000];   // Segmentain fault, cannot allocate

    return 0;
}