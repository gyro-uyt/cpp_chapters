#include <iostream>
#include <string>
#include <unordered_map>
#include <vector>
using namespace std;

class Solution {
public:
  /*
    If sizes differ → not an anagram.
    If decrement ever goes below 0 → not an anagram.
    Otherwise → it is an anagram.
   */
  bool isAnagram(string s, string t) {
    if (s.size() != t.size())
      return false;
    unordered_map<char, int> alphabet;
    for (auto i : s)
      alphabet[i]++;
    for (auto i : t) {
      alphabet[i]--;
      if (alphabet[i] < 0)
        return false;
    }
    return true;
  }
  bool M2isAnagram(string s, string t) {
    if (s.size() != t.size())
      return false;
    vector<int> count(26, 0);
    for (int i = 0; i < s.size(); i++) {
      count[s[i] - 'a']++;
      count[t[i] - 'a']--;
    }
    for (int c : count)
      if (c != 0)
        return false;
    return true;
  }
};

int main() {
  Solution s1;
  string s = "anagram";
  string t = "nagram";
  cout << s1.isAnagram(s, t) << endl;

  return 0;
}
