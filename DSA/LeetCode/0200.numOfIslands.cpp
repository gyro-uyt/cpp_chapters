#include <iostream>
#include <queue>
#include <utility>
#include <vector>
using namespace std;

class Solution {
public:
  void bfs0(int row, int col, vector<vector<char>> &grid) {
    int n = grid.size();
    int m = grid[0].size();

    queue<pair<int, int>> q;
    q.push({row, col});
    grid[row][col] = '0';

    // In a grid, each cell (r, c) can move in 4 directions, up(r-1,c),
    // down(r+1,c), left(r,c-1), right(r,c+1), it's a trick to avoid writing 4
    // separate if-else blocks for neighbors
    int dR[] = {-1, 1, 0, 0}; // row changes: up, down, stay, stay
    int dC[] = {0, 0, -1, 1}; // col changes: stay, stay, left, right

    while (!q.empty()) {
      pair<int, int> p = q.front();
      int r = p.first;
      int c = p.second;
      q.pop();

      for (int k = 0; k < 4; k++) {
        int nR = r + dR[k];
        int nC = c + dC[k];

        if ((nR >= 0 && nR < n && nC >= 0 && nC < m) && grid[nR][nC] == '1') {
          q.push({nR, nC});
          grid[nR][nC] = '0';
        }
      }
    }
  }
  int numIslands(vector<vector<char>> &grid) {
    int ans = 0;

    for (int i = 0; i < grid.size(); i++) {
      for (int j = 0; j < grid[i].size(); j++) {
        if (grid[i][j] == '1') {
          ans++;
          bfs0(i, j, grid);
        }
      }
    }
    return ans;
  }
};

int main() {

  vector<vector<char>> grid = {
      {'0', '0', '0', '0'}, {'0', '1', '0', '0'}, {'0', '0', '0', '0'}};

  Solution s1;
  cout << s1.numIslands(grid) << endl;

  return 0;
}
