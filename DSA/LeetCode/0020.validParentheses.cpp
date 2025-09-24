#include <iostream>
#include <stack>
using namespace std;

class Solution {
public:
  bool isValid(string s) {
    stack<char> store;

    for (char c : s) {
      // opening braces
      if (c == '(' || c == '{' || c == '[') {
        store.push(c);
      }
      // closing braces
      else {
        // No opening bracket present
        if (store.empty())
          return false;
        // Opening bracket present
        else {
          char top = store.top();
          store.pop();
          // matching braces
          if ((c == ')' && top != '(') || (c == '}' && top != '{') ||
              (c == ']' && top != '[')) {
            return false;
          }
        }
      }
    }
    return store.empty();
  }
};

int main() {
  Solution s1;
  string s = "()[]{}";
  cout << s1.isValid(s) << endl;

  return 0;
}
