#include <bits/stdc++.h>
#include <vector>
using namespace std;

class Solution {
public:
  void bruteForce(vector<vector<int>> &matrix) {
    int n = matrix.size();
    int m = matrix[0].size();
    vector<vector<int>> zeroPlaces;
    for (int i = 0; i < n; i++)
      for (int j = 0; j < m; j++)
        if (matrix[i][j] == 0)
          zeroPlaces.push_back({i, j});
    for (auto it : zeroPlaces) {
      int x = it[0];
      int y = it[1];
      for (int i = 0; i < m; i++)
        matrix[x][i] = 0;
      for (int j = 0; j < n; j++)
        matrix[j][y] = 0;
    }
  }
  void better(vector<vector<int>> &matrix) {
    int m = matrix.size();
    int n = matrix[0].size();
    // Create row marker array
    vector<int> row(m, 0);
    // Create column marker array
    vector<int> col(n, 0);

    // First pass: mark rows and columns that need to be zeroed
    for (int i = 0; i < m; i++)
      for (int j = 0; j < n; j++)
        // If element is zero, mark its row and column
        if (matrix[i][j] == 0) {
          row[i] = 1;
          col[j] = 1;
        }

    // Second pass: set cells to zero based on markers
    for (int i = 0; i < m; i++)
      for (int j = 0; j < n; j++)
        // If the row or column is marked, set cell to zero
        if (row[i] == 1 || col[j] == 1)
          matrix[i][j] = 0;
  }
  void optimal(vector<vector<int>> &matrix) {
    int m = matrix.size();
    int n = matrix[0].size();
    // Flag to track if first row should be zeroed
    bool firstRowZero = false;
    // Flag to track if first column should be zeroed
    bool firstColZero = false;

    // Check if first row has any zero
    for (int j = 0; j < n; j++)
      if (matrix[0][j] == 0) {
        firstRowZero = true;
        break;
      }

    // Check if first column has any zero
    for (int i = 0; i < m; i++)
      if (matrix[i][0] == 0) {
        firstColZero = true;
        break;
      }

    // Mark rows and columns in first row/column
    for (int i = 1; i < m; i++)
      for (int j = 1; j < n; j++)
        if (matrix[i][j] == 0) {
          matrix[i][0] = 0;
          matrix[0][j] = 0;
        }

    // Set matrix cells to zero based on markers
    for (int i = 1; i < m; i++)
      for (int j = 1; j < n; j++)
        if (matrix[i][0] == 0 || matrix[0][j] == 0)
          matrix[i][j] = 0;

    // Handle first row
    if (firstRowZero)
      for (int j = 0; j < n; j++)
        matrix[0][j] = 0;
    // Handle first column
    if (firstColZero)
      for (int i = 0; i < m; i++)
        matrix[i][0] = 0;
  }
};
