#include <iostream>
#include <stack>
using namespace std;

class Solution {
public:
  bool isValid(string s) {
    stack<char> store;
    char check;
    int i = 0;
    while (i < s.size() && (s[i] == '(' || s[i] == '{' || s[i] == '[')) {
      i++;
      if (s[i] == ')' || s[i] == '}' || s[i] == ']') {
        check = store.top();
        if (s[i] == ')' && check != '(')
          return false;

        else if (s[i] == '}' && check != '{')
          return false;

        else if (s[i] == ']' && check != '[')
          return false;
      }
      store.push(s[i]);
    }
    return true;
  }
};

int main() {
  Solution s1;
  string s = "()[]{}";
  cout << s1.isValid(s) << endl;

  return 0;
}
