#include <iostream>
#include <map>
using namespace std;

int main() {

    int n;
    cin >> n;
    int arr[n];
    map<int, int> mpp;  // Pre-Compute
    for(int i = 0; i < n; i++) {

        cin >> arr[i];
        mpp[arr[i]]++;
    }

    // Iterate in the map
    for(auto itr : mpp) {

        cout << itr.first << "->" << itr.second << endl;
    }

    int q;
    cin >> q;
    while(q--) {

        int number;
        cin >> number;
        //fetch
        cout << mpp[number] << endl;
    }

    return 0;
}