#include <algorithm>
#include <climits>
#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
  int maxProfit(vector<int> &prices) {
    int minPrice = INT_MAX;
    int maxProfit = 0;
    for (int i = 0; i < prices.size(); i++) {
      if (prices[i] < minPrice) {
        minPrice = prices[i];
      } else if ((prices[i] - minPrice) > maxProfit) {
        maxProfit = prices[i] - minPrice;
      }
    }
    return maxProfit;
  }
  int bruteForce(vector<int> &prices) {
    int maxProfit = 0;
    int curr = 0;
    int n = prices.size();
    for (int i = 0; i < n; i++)
      for (int j = i + 1; j < n; j++) {
        curr = prices[j] - prices[i];
        maxProfit = max(maxProfit, curr);
      }
    return maxProfit;
  }
  int optimal(vector<int> &prices) {
    int maxProfit = 0;
    int mini = prices[0];
    for (int i = 1; i < prices.size(); i++) {
      int profit = prices[i] - mini;
      maxProfit = max(maxProfit, profit);
      mini = min(mini, prices[i]);
    }
    return maxProfit;
  }
};

int main() {

  Solution s1;
  vector<int> arr = {7, 3, 6, 2, 4};
  cout << s1.maxProfit(arr) << endl;

  return 0;
}
