#include <iostream>
#include <string>

using namespace std;

string encrypt(string text, int shift) {
  string result = "";
  shift = shift % 26;

  for (char c : text) {
    if (isupper(c))
      result += char(int(c + shift - 'A') % 26 + 'A');
    else if (islower(c))
      result += char(int(c + shift - 'a') % 26 + 'a');
    else
      result += c;
  }
  return result;
}

string decrypt(string text, int shift) {
  return encrypt(text, 26 - (shift % 26));
}

int main() {
  string text;
  int shift;

  cout << "Enter text: ";
  getline(cin, text);

  cout << "Enter shift value (1-25): ";
  cin >> shift;

  string encryptedText = encrypt(text, shift);
  string decryptedText = decrypt(encryptedText, shift);

  cout << "\n=== Results ===" << endl;
  cout << "Original Text  : " << text << endl;
  cout << "Encrypted Text : " << encryptedText << endl;
  cout << "Decrypted Text : " << decryptedText << endl;

  return 0;
}