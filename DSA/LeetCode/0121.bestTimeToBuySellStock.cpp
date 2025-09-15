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
};

int main() {

  Solution s1;
  vector<int> arr = {7, 3, 6, 2, 4};
  cout << s1.maxProfit(arr) << endl;

  return 0;
}