#include <vector>
#include <climits>
using namespace std;

class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool> ans(candies.size());
        int maxCandies = INT_MIN;
        for (int i = 0; i < candies.size(); i++) {
            if (candies[i] > maxCandies) {
                maxCandies = candies[i];
            }
        }
        for (int i = 0; i < candies.size(); i++) {
            int updateCandies = candies[i] + extraCandies;
            if (updateCandies >= maxCandies)
                ans[i] = true;
            else
                ans[i] = false;
        }
        return ans;
    }
};