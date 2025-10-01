#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
  int orangesRotting(vector<vector<int>> &grid) {
    int fresh = 0;
    queue<pair<pair<int, int>, int>> rot; // ((i,j),time)

    for (int i = 0; i < grid.size(); i++) {
      for (int j = 0; j < grid[0].size(); j++) {
        if (grid[i][j] == 2)
          rot.push({{i, j}, 0});

        else if (grid[i][j] == 1)
          fresh++;
      }
    }

    int minutes = 0;
    int dr[] = {-1, 1, 0, 0};
    int dc[] = {0, 0, -1, 1};

    while (!rot.empty()) {
      auto [cell, t] = rot.front();
      rot.pop();
      int r = cell.first;
      int c = cell.second;
      minutes = max(minutes, t);

      for (int k = 0; k < 4; k++) {
        int nr = r + dr[k];
        int nc = c + dc[k];
        if ((nr >= 0 && nr < grid.size() && nc >= 0 && nc < grid[0].size()) &&
            grid[nr][nc] == 1) {
          grid[nr][nc] = 2;
          fresh--;
          rot.push({{nr, nc}, t + 1});
        }
      }
    }
    return fresh > 0 ? -1 : minutes;
  }
};
int main() {
  Solution s1;
  return 0;
}
