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
  Node *newNode = new Node(value);
  // new node is create of value and it's address is stored in newNode
  // >We use a pointer (Node*) because the node is created in heap memory.
  // >If we don’t use a pointer, the node will get deleted when the function
  // ends. >The pointer helps us keep track of the node’s address, so we can
  // link it to the list. > so, when the insert() is executed newNode will
  // disappear as it's scope is inside only,
  //   but the scope of Node(value) is not limited to functn only as we used new
  //   so it'll be in heap memory to be accessed later so we'll assign a new
  //   pointer to it so we don't loose access.

  // if list is empty
  if (head == nullptr) {
    head = newNode;
    return; // following code won't ran as this is for first Node only
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

int main() {
  cout << sizeof(Node) << endl;
  cout << sizeof(LL) << endl;

  LL list1;
  list1.insert(69);
  list1.insert(96);

  return 0;
}