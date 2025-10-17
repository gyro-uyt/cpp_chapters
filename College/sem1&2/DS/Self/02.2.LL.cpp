#include <iostream>
using namespace std;

struct Node {
  int data;   // size = 4 + 4(padding)
  Node *next; // size = 8

  Node(int value) // constructor
  {
    data = value;
    next = nullptr;
  }
};

class LL {
private:
  Node *head; // size = 8

public:
  LL();
  void insert(int value);
  void display(void);
  void remove(int value);
};

LL::LL() { head = nullptr; }
void LL::insert(int value) {
  // new node is create of value and it's address is stored in newNode
  Node *newNode = new Node(value);

  // if list is empty
  if (head == nullptr) {
    head = newNode;
    return;
  }

  // after this loop ends temp would be pointing the last node of LL
  Node *temp = head;
  while (temp->next != 0) {
    temp = temp->next;
  }

  // this makes the last node's next pointing towards newNode making the newNode
  // the last node
  temp->next = newNode;
}
void LL::display(void) {
  Node *temp = head;

  while (temp != nullptr) {
    cout << temp->data << " -> ";
    temp = temp->next;
  }
  cout << "Null" << endl;
}

int main() {
  cout << sizeof(Node) << endl;
  cout << sizeof(LL) << endl;

  LL list1;
  list1.insert(69);
  list1.insert(96);
  list1.insert(77);
  list1.insert(14);
  list1.insert(32);
  list1.insert(55);

  list1.display();

  return 0;
}