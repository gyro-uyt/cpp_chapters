#include <iostream>
#include <vector>
using namespace std;

void pt(vector<int> &nums) {
    for(vector<int>::iterator it = nums.begin(); it < nums.end(); it++) {
        cout << *(it) << " ";
    }
    cout << endl;
}

int main() {
    vector<int> vec1 = {0, 1, 2, 2, 3, 0, 4, 2};
    int val1 = 2;
    
    pt(vec1);
    vector<int>::iterator itr = vec1.begin();
    vec1.erase(itr+2);
    pt(vec1);
    vec1.erase(itr+2);
    pt(vec1);
    vec1.erase(itr+5);
    pt(vec1);

    return 0;
}