#include <iostream>
using namespace std;

struct Node {
  int data;
  Node *next;

  Node(int val) {
    data = val;
    next = nullptr;
  }
};

int main() {
  Node n1(23), n2(7), n3(972);

  n1.next = &n2;
  n2.next = &n3;
  n3.next = &n1;

  cout << (n3.next) << " & " << &n1.data << " & " << n1.data << endl;
  return 0;
}