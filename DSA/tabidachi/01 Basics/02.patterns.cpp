// cpmplete Lec 4: for more practice
#include <iostream>
using namespace std;

int main() {

    // cout << "Enter a: ";
    // int a = cin.get();  // it takes char as input
    // cout << "a: " << a << endl;

    int n;
    cout << "Enter n: ";
    cin >> n;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cout << "* ";
        }
        cout << endl;
    }
    for(int i = 0; i < n; i++) {
        static int x = 1;
        for(int j = 0; j < n; j++) {
            cout << x << " ";
        }
        x++;
        cout << endl;
    }
    int i = 0;
    while(i < n) {
        int j = 0;
        while(j < n) {
            cout << (i + 1) << " ";
            j++;
        }
        cout << endl;
        i++;
    }


    return 0;
}