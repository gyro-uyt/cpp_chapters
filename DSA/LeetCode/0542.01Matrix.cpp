#include <bits/stdc++.h>
#include <queue>
#include <utility>
#include <vector>
using namespace std;

class Solution {
public:
  vector<vector<int>> updateMatrix(vector<vector<int>> &mat) {
    int n = mat.size();
    int m = mat[0].size();

    vector<vector<int>> ans(n, vector<int>(m, -1));

    // store coordinates of all zeros
    queue<pair<int, int>> q;
    for (int i = 0; i < n; i++)
      for (int j = 0; j < m; j++)
        if (mat[i][j] == 0) {
          ans[i][j] = 0;
          q.push({i, j});
        }

    // do bfs from all these zeros & keep updating the result

    while (!q.empty()) {
      auto [r, c] = q.front();
      q.pop();

      int dr[] = {0, 0 - 1, 1};
      int dc[] = {-1, 1, 0, 0};

      for (int k = 0; k < 4; k++) {
        int nr = r + dr[k];
        int nc = c + dc[k];

        if ((nr >= 0 && nr < n && nc >= 0 && nc < m) && ans[nr][nc] == -1) {
          ans[nr][nc] = ans[r][c] + 1;
          q.push({nr, nc});
        }
      }
    }

    return ans;
  }
};

class Solution0 {
public:
  void bfs(int i, int j, vector<vector<int>> &ans, vector<vector<int>> &mat) {

    int n = mat.size();
    int m = mat[0].size();

    vector<vector<int>> visited(n, vector<int>(m, 0));
    queue<pair<pair<int, int>, int>> q; // ((r,c), dist)
    q.push({{i, j}, 0});
    visited[i][j] = 1;

    int dr[] = {0, 0, -1, 1};
    int dc[] = {-1, 1, 0, 0};

    while (!q.empty()) {
      auto [cell, d] = q.front();
      int r = cell.first;
      int c = cell.second;
      q.pop();

      // If we found nearest zero
      if (mat[r][c] == 0) {
        ans[i][j] = d;
        return;
      }

      for (int k = 0; k < 4; k++) {
        int nr = r + dr[k];
        int nc = c + dc[k];

        if ((nr >= 0 && nc >= 0 && nr < n && nc < m) && !visited[nr][nc]) {
          visited[nr][nc] = 1;
          q.push({{nr, nc}, d + 1});
        }
      }
    }
  }
  vector<vector<int>> updateMatrix(vector<vector<int>> &mat) {
    int n = mat.size();
    int m = mat[0].size();
    vector<vector<int>> ans(n, vector<int>(m, 0));

    for (int i = 0; i < n; i++)
      for (int j = 0; j < m; j++)
        if (mat[i][j] == 1)
          bfs(i, j, ans, mat);

    return ans;
  }
};

int main() {}