#include <bits/stdc++.h>
using namespace std;

string railFenceCipher(string text, int key) {
  // matrix of 'key' rows and 'text.length() columns'
  int col = text.length();
  vector<vector<char>> mat(key, vector<char>(col));
  int i = 0;
  bool down = true;
  for (int j = 0; j < col; j++) {
    if (down)
      i++;
    else
      i--;
    if (i == key)
      down = false;
    if (i == 1)
      down = true;
    mat[i - 1][j] = text[j];
  }
  string cipherText = "";
  for (int i = 0; i < key; i++) {
    for (int j = 0; j < col; j++) {
      if (mat[i][j] != '\0')
        cipherText.push_back(mat[i][j]);
    }
  }
  return cipherText;
}

int main() {
  string userText;
  int key = 0;
  cout << "Enter text: ";
  cin >> userText;
  cout << "Enter key: ";
  cin >> key;
  string cipherText = railFenceCipher(userText, key);
  cout << "Your ciphered text: " << cipherText << "\n";
  return 0;
}