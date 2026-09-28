#include <bits/stdc++.h>
using namespace std;

// Permutation Tables
const int IP[] = {
    58, 50, 42, 34, 26, 18, 10, 2,
    60, 52, 44, 36, 28, 20, 12, 4,
    62, 54, 46, 38, 30, 22, 14, 6,
    64, 56, 48, 40, 32, 24, 16, 8,
    57, 49, 41, 33, 25, 17, 9,  1,
    59, 51, 43, 35, 27, 19, 11, 3,
    61, 53, 45, 37, 29, 21, 13, 5,
    63, 55, 47, 39, 31, 23, 15, 7
};
const int FP[] = {
    40, 8, 48, 16, 56, 24, 64, 32,
    39, 7, 47, 15, 55, 23, 63, 31,
    38, 6, 46, 14, 54, 22, 62, 30,
    37, 5, 45, 13, 53, 21, 61, 29,
    36, 4, 44, 12, 52, 20, 60, 28,
    35, 3, 43, 11, 51, 19, 59, 27,
    34, 2, 42, 10, 50, 18, 58, 26,
    33, 1, 41, 9,  49, 17, 57, 25
};
const int EXPANSION[] = {
    32, 1,  2,  3,  4,  5,
    4,  5,  6,  7,  8,  9,
    8,  9,  10, 11, 12, 13,
    12, 13, 14, 15, 16, 17,
    16, 17, 18, 19, 20, 21,
    20, 21, 22, 23, 24, 25,
    24, 25, 26, 27, 28, 29,
    28, 29, 30, 31, 32, 1
};
const int SBOX[8][4][16] = {
    {
        {14,4,13,1,2,15,11,8,3,10,6,12,5,9,0,7},
        {0,15,7,4,14,2,13,1,10,6,12,11,9,5,3,8},
        {4,1,14,8,13,6,2,11,15,12,9,7,3,10,5,0},
        {15,12,8,2,4,9,1,7,5,11,3,14,10,0,6,13}
    },
    // Remaining S-Boxes defaulted for demonstration brevity
};
string permute(const string& input, const int* table, int n) {
    string output = "";
    for (int i = 0; i < n; i++) 
        output += input[table[i] - 1];
    return output;
}
string xorOp(const string& a, const string& b) {
    string res = "";
    for (size_t i = 0; i < a.length(); i++) 
      res += (a[i] == b[i]) ? '0' : '1';
    
    return res;
}
string feistel(string R, string roundKey) {
    string expandedR = permute(R, EXPANSION, 48);
    string xored = xorOp(expandedR, roundKey);
    string substituted = "";
    for (int i = 0; i < 8; i++) {
        string block = xored.substr(i * 6, 6);
        int row = (block[0] - '0') * 2 + (block[5] - '0');
        int col = (block[1] - '0') * 8 + (block[2] - '0') * 4 + (block[3] - '0') * 2 + (block[4] - '0');
        int val = SBOX[0][row][col];
        substituted += bitset<4>(val).to_string();
    }
    return substituted;
}
string processBlock(string blockBits, vector<string>& roundKeys, bool encrypt) {
    string permuted = permute(blockBits, IP, 64);
    string L = permuted.substr(0, 32);
    string R = permuted.substr(32, 32);
    for (int i = 0; i < 16; i++) {
        string tempR = R;
        string key = encrypt ? roundKeys[i] : roundKeys[15 - i];
        R = xorOp(L, feistel(R, key));
        L = tempR;
    }
    string combined = R + L;
    return permute(combined, FP, 64);
}
int main() {
    string sampleBits = "0000000100100011010001010110011110001001101010111100110111101111";    // 64 bits
    vector<string> roundKeys(16, "000010110000111100010011000001010000101100001111"); // 48-bit mock round keys
    cout << "Original 64-bit Block : " << sampleBits << endl;
    string encrypted = processBlock(sampleBits, roundKeys, true);
    cout << "Encrypted Bitstream   : " << encrypted << endl;
    string decrypted = processBlock(encrypted, roundKeys, false);
    cout << "Decrypted Bitstream   : " << decrypted << endl;
    return 0;
}