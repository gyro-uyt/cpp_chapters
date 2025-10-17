#include <iostream>
using namespace std;

struct Node {
  int data;
  Node *next;

  Node(int x) {
    data = x;
    next = nullptr;
  }
};

// default value of head = null which points the First node
Node *head = nullptr;

int main() { return 0; }