#include <iostream>
#include <stack>
using namespace std;

int main() {
  stack<char> store;
  store.push('J');
  store.push('o');

  char c = store.top();
  store.pop();
  cout << c << endl;

  c = store.top();
  store.pop();
  cout << c << endl;

//   c = store.top();
//   cout << c << endl;

  return 0;
}