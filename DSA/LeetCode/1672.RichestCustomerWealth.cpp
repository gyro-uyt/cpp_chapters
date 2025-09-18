#include <iostream>
#include <numeric>
#include <vector>
using namespace std;

class Solution {
public:
  int maximumWealth(vector<vector<int>> &accounts) {
    int maxWealth = 0;
    for (int i = 0; i < accounts.size(); i++) {
      int individualWealth = 0;
      for (int j = 0; j < accounts[i].size(); j++) {
        individualWealth += accounts[i][j];
      }
      maxWealth = max(individualWealth, maxWealth);
    }
    return maxWealth;
  }
  int STLmaximumWealth(vector<vector<int>> &accounts) {
    int maxWealth = 0;
    for (auto &customer : accounts) {
      int individualWealth = accumulate(customer.begin(), customer.end(), 0);
      maxWealth = max(maxWealth, individualWealth);
    }
    return maxWealth;
  }
};

int main() {

  Solution s1;
  vector<vector<int>> accounts = {{2, 8, 7}, {7, 1, 3}, {1, 9, 5}};
  cout << s1.maximumWealth(accounts) << endl;
  //   cout << accounts[1][1] << endl;
  return 0;
}