#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
  // First try -> Correct
  vector<vector<int>> flipAndInvertImage(vector<vector<int>> &image) {
    for (int i = 0; i < image.size(); i++) {
      for (int j = 0; j < image.size(); j++) {
        if (image[i][j] == 0)
          image[i][j] = 1;
        else
          image[i][j] = 0;
      }
      int n = image.size() - 1;
      for (int k = 0; k < image.size() / 2; k++)
        swap(image[i][k], image[i][n--]);
    }
    return image;
  }
  // Polished Version of above
  vector<vector<int>> flipAndInvertImage1(vector<vector<int>> &image) {
    for (int i = 0; i < image.size(); i++) {
      for (int j = 0; j < image[i].size(); j++) {
        image[i][j] ^= 1; // toggle 0<->1
      }

      int l = 0, r = image[i].size() - 1;
      while (l < r)
        swap(image[i][l++], image[i][r--]);
    }
    return image;
  }
};
