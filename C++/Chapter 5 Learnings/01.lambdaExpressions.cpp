#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {

    vector<int> v1{1, 3, 4, 6, 33, 35, 75};

    for_each(v1.begin(), v1.end(), [](int x) {cout << x << endl;});
    // [cc](p){fd};
    // [](int x){cout<<x<<endl;};

    return 0;
}