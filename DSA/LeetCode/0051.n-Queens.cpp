#include <bits/stdc++.h>
#include <functional>
#include <vector>
using namespace std;

class Solution {
public:
  vector<vector<string>> ans;
  int N;
  bool isValid(vector<string> board, int row, int col) {
    // look upward
    for (int i = row - 1; i >= 0; i--) {
      if (board[i][cpl] == 'Q')
        return false;
    }

    // check left Diagonal upward
    for (int i = row - 1, j = col - 1; i >= 0 && j >= 0; i--, j--)
      if (board[i][j] == 'Q')
        return false;

    // check right Diagonal upward
    for (int i = row - 1)
  }

  void solve(vector<string> &board, int row) {
    if (row >= N) {
      ans.push_back(board);
      return;
    }
    for (int col = 0; col < N; col++) {
      if (isValid(board, row, col)) {
        board[row][col] = 'Q';
        solve(board, row + 1);
        board[row][col] = '.';
      }
    }
  }

  vector<vector<string>> solveNQueens(int n) {
    // rules, No queens should be in same : 1) Row 2) Column 3) Diagonal
    N = n;
    vector<string> board(n, string(n, '.')); // n=3 -> {"...", "...", "..."}

    solve(board, 0); // row = 0

    return ans;
  }
};
