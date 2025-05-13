#include <iostream>
#include <map>
using namespace std;

int main() {

    string s;
    cin >> s;
    map<char, int> mpp;
    for(int i = 0; i < s.size(); i++) {
        
        mpp[s[i]]++;
    }

    int q;
    cin >> q;
    while(q--) {

        char c;
        cin >> c;
        // fetch
        cout << mpp[c] << endl;
    }
    return 0;
}