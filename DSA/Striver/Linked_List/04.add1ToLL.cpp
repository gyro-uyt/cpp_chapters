#include <bits/stdc++.h>
using namespace std;

class Node {
public:
  int data;
  Node *next;

  Node(int x) {
    data = x;
    next = nullptr;
  }
};

// TC: O(n), SC: O(n)
class Optimal {
public:
  int findCarry(Node *temp) {
    if (!temp)
      return 1;

    int carry = findCarry(temp->next);
    temp->data += carry;
    if (temp->data < 10)
      return 0;
    temp->data = 0;
    return 1;
  }

  Node *addOne(Node *head) {
    int carry = findCarry(head);
    if (carry == 1) {
      Node *newNode = new Node(1);
      newNode->next = head;
      return newNode;
    }
    return head;
  }
};

// TC: O(3n), SC: O(1)
class Better {
public:
  Node *reverseLL(Node *head) {
    Node *temp = head;
    Node *prev = nullptr;
    while (temp) {
      Node *next = temp->next;
      temp->next = prev;
      prev = temp;
      temp = next;
    }
    return prev;
  }
  Node *addOne(Node *head) {
    head = reverseLL(head);
    Node *temp = head;
    int carry = 1;
    while (temp) {
      temp->data += carry;
      if (temp->data < 10) {
        carry = 0;
        break;
      } else {
        temp->data = 0; // bcz we're adding just 1
        carry = 1;      // so temp->data >= 10 only
      } // when it's 9, then carry
      temp = temp->next; // becomes 1 and data becomes 0
    }
    head = reverseLL(head);
    if (carry == 1) {
      Node *newNode = new Node(1);
      newNode->next = head;
      return newNode;
    }
    return head;
  }
};