#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
  bool bfs(int i, int j, vector<vector<int>> &grid) {
    queue<pair<int, int>> q;
    q.push({i, j});
    grid[i][j] = 1;
    bool isClosed = true;

    int dr[] = {0, 0, -1, 1};
    int dc[] = {-1, 1, 0, 0};

    while (!q.empty()) {
      auto [r, c] = q.front();
      q.pop();

      if (r == 0 || c == 0 || r == grid.size() - 1 || c == grid[0].size() - 1)
        isClosed = false;

      for (int k = 0; k < 4; k++) {
        int nr = r + dr[k];
        int nc = c + dc[k];

        if ((nr >= 0 && nr < grid.size() && nc >= 0 && nc < grid[0].size()) &&
            (grid[nr][nc] == 0)) {
          q.push({nr, nc});
          grid[nr][nc] = 1;
        }
      }
    }
    return isClosed;
  }
  int closedIsland(vector<vector<int>> &grid) {
    int ans = 0;
    for (int i = 0; i < grid.size(); i++)
      for (int j = 0; j < grid[0].size(); j++)
        if (grid[i][j] == 0)
          if (bfs(i, j, grid))
            ans++;

    return ans;
  }
};
