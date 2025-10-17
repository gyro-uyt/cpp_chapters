#include <iostream>
using namespace std;

struct Node {
  int data;
  Node *next;
};

Node *head = nullptr; // Global head pointer

void insertNode() {
  int val;
  cout << "Enter a number: ";
  cin >> val;

  Node *newnode = new Node; // Allocating memory using `new`
  newnode->data = val;
  newnode->next = nullptr;

  if (head == nullptr) {
    head = newnode; // First node
  } else {
    Node *temp = head;
    while (temp->next != nullptr) {
      temp = temp->next;
    }
    temp->next = newnode; // Insert at the end
  }
}

void displayList() {
  if (head == nullptr) {
    cout << "Linked list is empty." << endl;
    return;
  }

  cout << "Linked list: ";
  Node *temp = head;
  while (temp != nullptr) {
    cout << temp->data << " -> ";
    temp = temp->next;
  }
  cout << "NULL" << endl;
}

void freeMemory() { // Function to free allocated memory
  Node *temp;
  while (head != nullptr) {
    temp = head;
    head = head->next;
    delete temp;
  }
  cout << "Memory freed, Linked List deleted.\n";
}

int main() {
  int choice;

  while (true) {
    cout << "\n1. Insert node\n2. Display list\n3. Exit\nEnter choice: ";
    cin >> choice;

    switch (choice) {
    case 1:
      insertNode();
      break;
    case 2:
      displayList();
      break;
    case 3:
      freeMemory();
      return 0;
    default:
      cout << "Invalid choice! Try again.\n";
    }
  }
}
