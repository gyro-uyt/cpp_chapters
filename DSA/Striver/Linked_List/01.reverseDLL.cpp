#include <bits/stdc++.h>
using namespace std;

// Structure of Doubly Linked List Node
class Node {
public:
  int data;
  Node *next;
  Node *prev;

  Node(int val) {
    data = val;
    next = nullptr;
    prev = nullptr;
  }
};

class Solution {
public:
  Node *reverse(Node *head) {
    Node *temp = head;
    while (temp != nullptr) {
      if (temp->next == nullptr)
        head = temp;
      Node *store = temp->next;
      temp->next = temp->prev;
      temp->prev = store;
      temp = temp->prev;
    }
    return head;
  }
};