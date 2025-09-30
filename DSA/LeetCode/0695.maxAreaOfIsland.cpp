#include <bits/stdc++.h>
#include <queue>
#include <utility>
#include <vector>
using namespace std;

class Solution {
public:
  // Org-ans
  int bfsArea(int i, int j, vector<vector<int>> &grid) {
    int area = 1;
    queue<pair<int, int>> q;
    q.push({i, j});
    grid[i][j] = 0;

    int dr[] = {0, 0, -1, 1};
    int dc[] = {-1, 1, 0, 0};

    while (!q.empty()) {
      pair<int, int> p = q.front();
      int r = p.first;
      int c = p.second;
      q.pop();

      for (int k = 0; k < 4; k++) {
        int nr = r + dr[k];
        int nc = c + dc[k];
        if ((nr >= 0 && nr < grid.size() && nc >= 0 && nc < grid[0].size()) &&
            (grid[nr][nc] == 1)) {
          q.push({nr, nc});
          area++;
          grid[nr][nc] = 0;
        }
      }
    }
    return area;
  }
  int maxAreaOfIsland(vector<vector<int>> &grid) {
    int ans = 0;
    for (int i = 0; i < grid.size(); i++) {
      for (int j = 0; j < grid[0].size(); j++) {
        if (grid[i][j] == 1) {
          ans = max(ans, bfsArea(i, j, grid));
        }
      }
    }
    return ans;
  }
};

class Solution1 {
public:
  // Improved-ans, uses visited array, so original grid is raw
  int bfsArea(int i, int j, vector<vector<int>> &grid,
              vector<vector<bool>> &visited) {
    int area = 1;
    int rows = grid.size(), cols = grid[0].size();
    queue<pair<int, int>> q;
    q.push({i, j});
    visited[i][j] = true;

    int dr[] = {0, 0, -1, 1};
    int dc[] = {-1, 1, 0, 0};

    while (!q.empty()) {
      auto [r, c] = q.front();
      q.pop();
      for (int k = 0; k < 4; k++) {
        int nr = r + dr[k];
        int nc = c + dc[k];
        if (nr >= 0 && nr < rows && nc >= 0 && nc < cols && grid[nr][nc] == 1 &&
            !visited[nr][nc]) {
          q.push({nr, nc});
          visited[nr][nc] = true;
          area++;
        }
      }
    }
    return area;
  }
  int maxAreaOfIsland(vector<vector<int>> &grid) {
    int ans = 0;
    int rows = grid.size(), cols = grid[0].size();
    vector<vector<bool>> visited(rows, vector<bool>(cols, false));
    for (int i = 0; i < rows; i++) {
      for (int j = 0; j < cols; j++) {
        if (grid[i][j] == 1 && !visited[i][j]) {
          ans = max(ans, bfsArea(i, j, grid, visited));
        }
      }
    }
    return ans;
  }
};

class Solution3 {
public:
  // DFS - recusive, simpler
  int dfs(int i, int j, vector<vector<int>> &grid,
          vector<vector<bool>> &visited) {
    int rows = grid.size(), cols = grid[0].size();
    if (i < 0 || i >= rows || j < 0 || j >= cols || grid[i][j] == 0 ||
        visited[i][j])
      return 0;

    visited[i][j] = true;
    int area = 1;

    int dr[] = {0, 0, -1, 1};
    int dc[] = {-1, 1, 0, 0};

    for (int k = 0; k < 4; k++) {
      area += dfs(i + dr[k], j + dc[k], grid, visited);
    }
    return area;
  }

  int maxAreaOfIsland(vector<vector<int>> &grid) {
    int ans = 0;
    int rows = grid.size(), cols = grid[0].size();
    vector<vector<bool>> visited(rows, vector<bool>(cols, false));
    for (int i = 0; i < rows; i++) {
      for (int j = 0; j < cols; j++) {
        if (grid[i][j] == 1 && !visited[i][j]) {
          ans = max(ans, dfs(i, j, grid, visited));
        }
      }
    }
    return ans;
  }
};
