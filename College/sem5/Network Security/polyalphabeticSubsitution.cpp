#include <bits/stdc++.h>
using namespace std;

string encryptPolyalphabetic(string text, string key) {
  string result = "";
  int keyLength = key.length();
  int keyIndex = 0;
  for (char c : text) {
    if (isalpha(c)) {
      int shift = toupper(key[keyIndex % keyLength]) - 'A';
      if (isupper(c))
        result += char((c - 'A' + shift) % 26 + 'A');
      else
        result += char((c - 'a' + shift) % 26 + 'a');
      keyIndex++;
    } else
      result += c;
  }
  return result;
}

string decryptPolyalphabetic(string text, string key) {
  string result = "";
  int keyLength = key.length();
  int keyIndex = 0;

  for (char c : text) {
    if (isalpha(c)) {
      int shift = toupper(key[keyIndex % keyLength]) - 'A';
      if (isupper(c))
        result += char((c - 'A' - shift + 26) % 26 + 'A');
      else
        result += char((c - 'a' - shift + 26) % 26 + 'a');
      keyIndex++;
    } else
      result += c;
  }
  return result;
}

int main() {
  string text, key;
  cout << "Enter plaintext: ";
  getline(cin, text);
  cout << "Enter key: ";
  cin >> key;
  string encrypted = encryptPolyalphabetic(text, key);
  string decrypted = decryptPolyalphabetic(encrypted, key);

  cout << "\n--- Polyalphabetic Cipher Results ---" << endl;
  cout << "Original  : " << text << endl;
  cout << "Encrypted : " << encrypted << endl;
  cout << "Decrypted : " << decrypted << endl;

  return 0;
}