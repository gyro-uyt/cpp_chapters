#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
  int islandPerimeter(vector<vector<int>> &grid) {
    int ans = 0;
    int dr[] = {0, 0, -1, 1};
    int dc[] = {-1, 1, 0, 0};
    for (int i = 0; i < grid.size(); i++) {
      for (int j = 0; j < grid[0].size(); j++) {
        if (grid[i][j] == 1) {
          ans += 4;
          for (int k = 0; k < 4; k++) {
            int nr = i + dr[k];
            int nc = j + dc[k];
            if (nr >= 0 && nr < grid.size() && nc >= 0 && nc < grid[0].size() &&
                grid[nr][nc] == 1) {
              ans--;
            }
          }
        }
      }
    }
    return ans;
  }
};
