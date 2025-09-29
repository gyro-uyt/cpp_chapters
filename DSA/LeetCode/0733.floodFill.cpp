#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
  vector<vector<int>> floodFill(vector<vector<int>> &image, int sr, int sc,
                                int color) {
    int orgColor = image[sr][sc];
    // If the original color is already equal to the new color, then there's
    // nothing to change
    if (orgColor == color)
      return image;

    queue<pair<int, int>> q;
    q.push({sr, sc});
    image[sr][sc] = color;
    int dr[] = {-1, 1, 0, 0};
    int dc[] = {0, 0, -1, 1};

    while (!q.empty()) {
      pair<int, int> p = q.front();
      int r = p.first;
      int c = p.second;
      q.pop();

      for (int i = 0; i < 4; i++) {
        int nr = r + dr[i];
        int nc = c + dc[i];
        if ((nr >= 0 && nr < image.size() && nc >= 0 && nc < image[0].size()) &&
            image[nr][nc] == orgColor) {
          q.push({nr, nc});
          image[nr][nc] = color;
        }
      }
    }

    return image;
  }
};
