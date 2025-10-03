#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
  int shortestPathBinaryMatrix(vector<vector<int>> &grid) {
    int n = grid.size();
    if (grid[0][0] == 1 || grid[n - 1][n - 1] == 1)
      return -1;

    queue<array<int, 3>> q;
    q.push({0, 0, 1}); // row, col, distance
    grid[0][0] = 1;

    int dr[] = {1, 1, 1, -1, -1, -1, 0, 0};
    int dc[] = {-1, 0, 1, -1, 0, 1, -1, 1};

    while (!q.empty()) {
      array<int, 3> arr = q.front();
      int r = arr[0];
      int c = arr[1];
      int dist = arr[2];
      q.pop();

      if (r == n - 1 && c == n - 1)
        return dist;

      for (int k = 0; k < 8; k++) {
        int nr = r + dr[k];
        int nc = c + dc[k];

        if ((nr >= 0 && nr < n && nc >= 0 && nc < n) && grid[nr][nc] == 0) {
          q.push({nr, nc, dist + 1});
          grid[nr][nc] = 1;
        }
      }
    }
    return -1;
  }
};
