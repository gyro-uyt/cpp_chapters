#include <bits/stdc++.h>
using namespace std;

char keyGrid[5][5];
void generateMatrix(string key) {
    bool used[26] = {false};
    used['J' - 'A'] = true;
    string cleanKey = "";
    for (char c : key) {
        if (isalpha(c)) {
            char upper = toupper(c);
            if (upper == 'J') upper = 'I';
            if (!used[upper - 'A']) {
                cleanKey += upper;
                used[upper - 'A'] = true;
            }
        }
    }
    for (char c = 'A'; c <= 'Z'; ++c) {
        if (!used[c - 'A']) {
            cleanKey += c;
            used[c - 'A'] = true;
        }
    }
    int idx = 0;
    for (int r = 0; r < 5; ++r) 
        for (int c = 0; c < 5; ++c) 
            keyGrid[r][c] = cleanKey[idx++];
}
void getCoordinates(char ch, int &row, int &col) {
    if (ch == 'J') ch = 'I';
    for (int r = 0; r < 5; ++r) {
        for (int c = 0; c < 5; ++c) {
            if (keyGrid[r][c] == ch) {
                row = r;
                col = c;
                return;
            }
        }
    }
}
string prepareText(string text) {
    string clean = "";
    for (char c : text) {
        if (isalpha(c)) {
            char upper = toupper(c);
            clean += (upper == 'J') ? 'I' : upper;
        }
    }
    string digraphs = "";
    for (size_t i = 0; i < clean.length(); ++i) {
        digraphs += clean[i];
        if (i + 1 < clean.length()) {
            if (clean[i] == clean[i + 1]) 
                digraphs += 'X';
            else 
                digraphs += clean[++i]; 
        } else 
            digraphs += 'X';
    }
    return digraphs;
}
string encryptPlayfair(string preparedText) {
    string ciphertext = "";
    for (size_t i = 0; i < preparedText.length(); i += 2) {
        int r1, c1, r2, c2;
        getCoordinates(preparedText[i], r1, c1);
        getCoordinates(preparedText[i + 1], r2, c2);
        if (r1 == r2) {
            ciphertext += keyGrid[r1][(c1 + 1) % 5];
            ciphertext += keyGrid[r2][(c2 + 1) % 5];
        } else if (c1 == c2) {
            ciphertext += keyGrid[(r1 + 1) % 5][c1];
            ciphertext += keyGrid[(r2 + 1) % 5][c2];
        } else {
            ciphertext += keyGrid[r1][c2];
            ciphertext += keyGrid[r2][c1];
        }
    }
    return ciphertext;
}
int main() {
    string key, plaintext;
    cout << "Enter key phrase: ";
    getline(cin, key);
    cout << "Enter plaintext: ";
    getline(cin, plaintext);
    generateMatrix(key);
    string prepared = prepareText(plaintext);
    string encrypted = encryptPlayfair(prepared);
    cout << "\n--- Playfair Cipher ---" << endl;
    cout << "Prepared Digraphs : " << prepared << endl;
    cout << "Encrypted Text    : " << encrypted << endl;
    return 0;
}