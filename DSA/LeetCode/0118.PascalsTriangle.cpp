#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
  vector<vector<int>> generate(int numRows) {
    vector<vector<int>> ans;
    for (int i = 0; i < numRows; i++) {
      vector<int> row(i + 1, 1);
      for (int j = 1; j < i; j++)
        row[j] = ans[i - 1][j - 1] + ans[i - 1][j];
      ans.push_back(row);
    }
    return ans;
  }

  void print(vector<vector<int>> arr) {
    for (int i = 0; i < arr.size(); i++) {
      for (int j = 0; j < arr[i].size(); j++)
        cout << arr[i][j] << " ";
      cout << endl;
    }
  }
};

int main() {
  Solution s1;
  s1.print(s1.generate(5));

  return 0;
}