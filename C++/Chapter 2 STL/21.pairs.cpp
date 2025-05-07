#include <iostream>
using namespace std;

int main() {
    // Pair is part of Utility
    pair<int, int> p1 = {1, 3};
    cout << p1.first << " " << p1.second << endl;

    pair<int, string> p2 = {1, "one"};
    cout << p2.first << " " << p2.second << endl;

    // Pairs are a set of 2 elements, therefore to store more than 2 elements make nested pair(pair inside a pair)
    pair<int, pair<int, int>> p3 = {1, {2, 3}};
    cout << p3.first << " " << p3.second.first << " " << p3.second.second << endl;

    // Array of pairs
    pair<int, int> p4[] = {{1, 2}, {3, 4}, {4, 5}, {6, 9}};
    cout << p4[3].second << endl;

    return 0;
}