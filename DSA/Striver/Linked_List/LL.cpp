#include <bits/stdc++.h>
using namespace std;

class Node {
public:
  int data;
  Node *next;

public:
  Node();
  Node(int data) {
    this->data = data;
    next = nullptr;
  }
  Node(int data, Node *next) {
    this->data = data;
    this->next = next;
  }
};

Node *convertArr2LL(vector<int> &arr) {
  Node *head = new Node(arr[0]);
  Node *mover = head;
  for (int i = 1; i < arr.size(); i++) {
    Node *temp = new Node(arr[i]);
    mover->next = temp;
    mover = mover->next;
  }
  return head;
}

Node *removeHead(Node *head) {
  if (head == nullptr)
    return head;
  Node *temp = head;
  head = head->next;
  delete temp;
  return head;
}

Node *removeTail(Node *head) {
  if (head == nullptr || head->next == nullptr)
    return nullptr;
  Node *temp = head;
  while (temp->next->next != nullptr)
    temp = temp->next;
  delete temp->next;
  temp->next = nullptr;
  return head;
}

// k is 0-indexed
Node *removeKthElement(Node *head, int k) {
  if (head == nullptr)
    return head;

  if (k == 0) {
    Node *temp = head;
    head = head->next;
    delete temp;
    return head;
  }

  int counter = 0;
  Node *temp = head;
  Node *prev = nullptr;
  while (temp != nullptr) {
    if (counter == k) {
      prev->next = temp->next;
      delete temp;
      break;
    }
    prev = temp;
    temp = temp->next;
    counter++;
  }

  // given k > size of LL
  return head;
}

// removes the first occurrence of given element
Node *removeElement(Node *head, int element) {
  if (head == nullptr)
    return head;

  if (head->data == element) {
    Node *temp = head;
    head = head->next;
    delete temp;
    return head;
  }

  Node *temp = head;
  Node *prev = nullptr;
  while (temp != nullptr) {
    if (temp->data == element) {
      prev->next = temp->next;
      delete temp;
      break;
    }
    prev = temp;
    temp = temp->next;
  }

  // given k > size of LL
  return head;
}

// position is 0-indexed
Node *insertElement(Node *head, int position, int value) {
  if (position == 0) {
    Node *temp = new Node(value, head);
    return temp;
  }
  int counter = 0;
  Node *temp = head;
  Node *prev = nullptr;
  while (counter != position) {
    prev = temp;
    temp = temp->next;
    counter++;
  }
  Node *newElement = new Node(value, temp);
  prev->next = newElement;
  return head;
}

int lengthOfLL(Node *head) {
  int count = 0;
  Node *temp = head;
  while (temp) {
    temp = temp->next;
    count++;
  }
  return count;
}

bool isPresent(Node *head, int target) {
  Node *temp = head;
  while (temp) {
    if (temp->data == target)
      return true;
    temp = temp->next;
  }
  return false;
}

void traverseLL(Node *head) {
  Node *temp = head;
  while (temp) {
    cout << temp->data << " ";
    temp = temp->next;
  }
  cout << "\n";
}

int main() {
  vector<int> arr = {12, 34, 45, 12};
  Node *head = convertArr2LL(arr);
  traverseLL(head);
  // head = removeKthElement(head, 2);
  // head = removeElement(head, 45);
  head = insertElement(head, 3, 69);
  traverseLL(head);

  return 0;
}