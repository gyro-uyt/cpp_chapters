#include <unordered_map>
#include <bits/stdc++.h>
#include <string>
using namespace std;

class Solution {
  public:
    bool canConstruct(string ransomNote, string magazine) {
      unordered_map<char,int> alphabet;
      for (int i = 0; i < magazine.size(); i++) {
        char c = magazine[i];
        alphabet[c]++;
      }
      for (int i = 0; i < ransomNote.size(); i++) {
        char c = ransomNote[i];
        alphabet[c]--;
        if (alphabet[c]<0) {
          return false;
        }
      }
      return true;
    }
};

int main(){
  string a = "aa";
  string b = "aab";
  Solution s1;
  std::cout << s1.canConstruct(a,b)<<std::endl;
}
