#include <iostream>
using namespace std;

struct Node {
  int data;
  Node *next;

  // Constructor to initialize data and set next to NULL
  Node(int x) {
    data = x;
    next = nullptr;
  }
};

int main() {
  // Initialisiation of Nodes is done automatically via constructor
  Node n1(4), n2(45), n3(2445);

  // Linking nodes manually
  n1.next = &n2;
  n2.next = &n3;
  // n3.next = nullptr;

  // Printing LL
  cout << n1.data << endl;
  cout << n2.data << endl;
  cout << n3.data << endl;

  cout << n1.next << endl;
  cout << n2.next << endl;
  cout << n3.next << endl;

  return 0;
}