#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    bool isSorted(vector<int>& arr) {
        // code here
        for (int i=1; i < arr.size(); i++) 
            if (arr[i] < arr[i-1])
                return false;
        return true;
    }
};