#include <bits/stdc++.h>
#include <vector>
using namespace std;

class Solution {
public:
  vector<int> optimal(vector<int> a, vector<int> b) {
    int n1 = a.size();
    int n2 = b.size();
    int i = 0, j = 0;
    vector<int> ans;

    while (i < n1 && j < n2) {
      if (a[i] <= b[j]) {
        if (ans.size() == 0 || ans.back() != a[i])
          ans.push_back(a[i]);
        i++;
      } else {
        if (ans.size() == 0 || ans.back() != b[j])
          ans.push_back(b[j]);
        j++;
      }
    }
    while (i < n1) {
      if (ans.size() == 0 || ans.back() != a[i])
        ans.push_back(a[i]);
      i++;
    }
    while (j < n2) {
      if (ans.size() == 0 || ans.back() != b[j])
        ans.push_back(b[j]);
      j++;
    }

    return ans;
  }
  vector<int> bruteForce(vector<int> &a, vector<int> &b) {
    set<int> store;
    vector<int> tmp;
    for (int num : a)
      store.insert(num);
    for (int num : b)
      store.insert(num);
    for (auto it : store)
      tmp.push_back(it);
    return tmp;
  }
};
