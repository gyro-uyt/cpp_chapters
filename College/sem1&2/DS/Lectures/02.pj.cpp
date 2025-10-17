#include <iostream>
using namespace std;

struct Node {
  int data;
  Node *next;
};

int main() {
  Node *head = nullptr, *newNode = nullptr, *temp = nullptr;
  int choice = 1;

  // In C and C++, any non-zero value is treated as true and 0 is treated as
  // false. while (choice) is shorthand for while (choice != 0). The loop will
  // continue until the user inputs 0.
  while (choice != 0) {
    newNode = new Node; // Allocate memory in C++ using 'new'
    // newNode = (struct Node*)malloc(sizeof(struct Node));

    cout << "Enter data: ";
    cin >> newNode->data;
    // printf("Enter data");
    // scanf("%d", &newNode->data);

    newNode->next = nullptr;
    // newNode->next = 0;

    if (head == nullptr) {
      head = temp = newNode;
    } else {
      temp->next = newNode;
      temp = newNode;
    }

    cout << "Do you want to continue (0,1)? ";
    cin >> choice;
    // printf("Do you want to continue (0,1)?");
    // scanf("%d", &choice);
  }

  // Display the linked list
  temp = head;
  cout << "Linked list data: ";
  while (temp != nullptr) {
    cout << temp->data << " ";
    // printf("%d", temp->data);

    temp = temp->next;
  }

  // Clean up allocated memory
  temp = head;
  while (temp != nullptr) {
    Node *toDelete = temp;
    temp = temp->next;
    delete toDelete; // C++ uses 'delete' to free memory
                     // free(toDelete);
  }
  cout << endl;

  return 0;
}
