#include <bits/stdc++.h>
using namespace std;

class RC4 {
private:
    vector<unsigned char> S;
    // Key-Scheduling Algorithm (KSA)
    void ksa(const string& key) {
        S.resize(256);
        int keyLength = key.length();
        for (int i = 0; i < 256; ++i) 
            S[i] = static_cast<unsigned char>(i);
        int j = 0;
        for (int i = 0; i < 256; ++i) {
            j = (j + S[i] + static_cast<unsigned char>(key[i % keyLength])) % 256;
            swap(S[i], S[j]);
        }
    }
public:
    // Pseudo-Random Generation Algorithm (PRGA) & Process (Encrypt/Decrypt)
    vector<unsigned char> process(const vector<unsigned char>& input, const string& key) {
        ksa(key); // Initialize S-box with the key
        vector<unsigned char> output(input.size());
        int i = 0;
        int j = 0;
        for (size_t n = 0; n < input.size(); ++n) {
            i = (i + 1) % 256;
            j = (j + S[i]) % 256;
            swap(S[i], S[j]);
            int k = S[(S[i] + S[j]) % 256]; // Keystream byte
            output[n] = input[n] ^ k;      // XOR input byte with keystream byte
        }
        return output;
    }
};

void printHex(const vector<unsigned char>& data) {
    for (unsigned char byte : data) 
        cout << hex << setw(2) << setfill('0') << (int)byte;
    cout << dec << "\n";
}

int main() {
    RC4 rc4;
    string key = "SecretKey";
    string plaintextStr = "Hello, RC4 Stream Cipher!";
    // Convert input text string to byte array
    vector<unsigned char> plaintext(plaintextStr.begin(), plaintextStr.end());

    // Encrypt
    vector<unsigned char> ciphertext = rc4.process(plaintext, key);

    // Decrypt (running RC4 process with key again on the ciphertext)
    vector<unsigned char> decryptedText = rc4.process(ciphertext, key);

    cout << "--- RC4 Stream Cipher Results ---\n";
    cout << "Original Text  : " << plaintextStr << "\n";
    cout << "Ciphertext (Hex): ";
    printHex(ciphertext);
    string restoredStr(decryptedText.begin(), decryptedText.end());
    cout << "Decrypted Text : " << restoredStr << "\n";

    return 0;
}