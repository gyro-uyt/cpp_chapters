#include <vector>
using namespace std;

vector<int> getRow(int rowIndex) {
  vector<vector<int>> triangle;
  vector<int> prevRow;

  for (int i = 0; i < rowIndex + 1; i++) {
    vector<int> currentRow(i + 1, 1);

    for (int j = 1; j < i; j++)
      currentRow[j] = prevRow[j - 1] + prevRow[j];

    prevRow = currentRow;
    triangle.push_back(currentRow);
  }

  return prevRow;
}

// Optimal way to solve, TC: O(n), in this method no need to generate the entire
// Pascal triangle, just use the nCr property of the Pascal triangle, that any
// element in the triangle (except first and last) is "nCr" (n=row and
// r=colIndex, both being 0-indexed)
int nCr(int n, int r) {
  long long ans = 1;
  for (int i = 0; i < r; i++) {
    ans *= (n - i);
    ans /= i + 1;
  }
  return ans;
}
vector<int> optimal(int rowIndex) {
  vector<int> ans(rowIndex + 1, 1);
  for (int i = 1; i < rowIndex; i++)
    ans[i] = nCr(rowIndex, i);
  return ans;
}
