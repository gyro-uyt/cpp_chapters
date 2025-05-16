#include <iostream>
#include <unordered_map>
using namespace std;

int main() {

    int size_of_array;
    cout << "Enter size of array: ";
    cin >> size_of_array;
    int arr[size_of_array];
    unordered_map<int, int> mpp;
    for(int i = 0; i < size_of_array; i++) {

        cin >> arr[i];
        mpp[arr[i]]++;
    }

    int query;
    cout << "Enter number of queries ";
    cin >> query;

    while(query--) {

        int number;
        cout << "Enter the number to search for ";
        cin >> number;
        //fetch
        cout << "Giver number has appeared " << mpp[number] << " times." << endl << endl;
    }

    return 0;
}