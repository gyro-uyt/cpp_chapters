#include <bits/stdc++.h>
using namespace std;

class Node {
public:
  int data;
  Node *next;
  Node *back;

public:
  Node(int data) {
    this->data = data;
    next = nullptr;
    back = nullptr;
  }
  Node(int data, Node *next, Node *back) {
    this->data = data;
    this->next = next;
    this->back = back;
  }
};

Node *convertArr2DLL(vector<int> &arr) {
  if (arr.size() == 0)
    return nullptr;
  Node *head = new Node(arr[0]);
  Node *temp = head;
  for (int i = 1; i < arr.size(); i++) {
    Node *newNode = new Node(arr[i], nullptr, temp);
    temp->next = newNode;
    temp = temp->next;
  }
  return head;
}

// k is 0-indexed
Node *deleteKthNode(Node *head, int k) {
  // k=0, head

  // empty head
  if (head == nullptr)
    return head;

  // single node
  if (head->next == nullptr) {
    head->next = nullptr;
    head->back = nullptr;
    delete head;
    return nullptr;
  }

  // more than 1 node, but remove head
  if (k == 0) {
    Node *temp = head;
    head = head->next;
    head->back = nullptr;

    // this step is redundant for C++ as we delete this node, but imp for other
    // lang with garbage collector/ auto deletion
    temp->next = nullptr;
    delete temp;
    return head;
  }

  // k>0
  int counter = 0;
  Node *temp = head;
  while (temp != nullptr) {
    if (counter == k) {
      Node *prevNode = temp->back;
      Node *nextNode = temp->next;
      prevNode->next = nextNode;
      if (nextNode != nullptr)
        nextNode->back = prevNode;
      temp->next = nullptr;
      temp->back = nullptr;
      delete temp;
      break;
    }
    temp = temp->next;
    counter++;
  }

  return head;
}

// given Node won't be head
void deleteGivenNode(Node *temp) {
  Node *prevNode = temp->back;
  Node *nextNode = temp->next;
  prevNode->next = nextNode;
  if (nextNode != nullptr)
    nextNode->back = prevNode;
  temp->next = nullptr;
  temp->back = nullptr;
  delete temp;
}

Node *insertAtHead(Node *head, int val) {
  Node *temp = new Node(val, head, nullptr);
  head = temp;
  temp = temp->next;
  temp->back = head;
  return head;
}

// position is 0-indexed
Node *insertValueAtPosition(Node *head, int val, int position) {
    Node *newNode = new Node(val);
    if (head == nullptr) {
        return newNode;
    }
    if (position == 0) {
        newNode->next = head;
        head->back = newNode;
        return newNode;    
    }
    Node *temp = head;
    int counter = 0;
    while (temp != nullptr && counter < position) {
        // tail
        if (temp->next == nullptr && counter + 1 == position) {
            temp->next = newNode;
            newNode->back = temp;
            return head;
        }
        temp = temp->next;
        counter++;
    }
    Node *prevNode = temp->back;
    newNode->next = temp;
    newNode->back = prevNode;
    temp->back = newNode;
    prevNode->next = newNode;

    return head;
}

void traverseDLL(Node *head) {
  Node *temp = head;
  while (temp) {
    cout << temp->data << " ";
    temp = temp->next;
  }
  cout << "\n";
}

int main() {
  vector<int> arr = {11, 22, 33, 44, 55, 66};
  Node *head = convertArr2DLL(arr);
  traverseDLL(head);
  head = deleteKthNode(head, 4);
  traverseDLL(head);

  return 0;
}