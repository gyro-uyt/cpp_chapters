// linked is like chain it follows chain rule

#include <iostream>
using namespace std;

struct Node {
  int data;   // our data
  Node *next; // pointer to the next node
};

int main() {
  // Step 1: Creating 4 nodes manually
  Node n1, n2, n3, n4;

  // Step 2: Assigning values manually
  n1.data = 69;
  n2.data = 34;
  n3.data = 53;
  n4.data = 76;

  // Step 3: Linking Nodes manually
  n1.next = &n2;     // first → second
  n2.next = &n3;     // second → third
  n3.next = &n4;     // third → fourth
  n4.next = nullptr; //  last node should point to NULL

  // Step 4: Printing the Linked List
  cout << n1.data << endl;
  cout << n2.data << endl;
  cout << n3.data << endl;
  cout << n4.data << endl;

  // seeing the output of n1.next
  cout << n1.next << endl;
  cout << n2.next << endl;
  cout << n3.next << endl;
  cout << n4.next << endl;

  return 0;
}