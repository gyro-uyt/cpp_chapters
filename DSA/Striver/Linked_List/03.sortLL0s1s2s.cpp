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

class Solution {
public:
  Node *optimal(Node *head) {
    if (!head || !head->next)
      return head;

    Node *zeroHead = new Node(-1);
    Node *oneHead = new Node(-1);
    Node *twoHead = new Node(-1);

    Node *zero = zeroHead;
    Node *one = oneHead;
    Node *two = twoHead;

    Node *temp = head;
    while (temp) {
      if (temp->data == 0) {
        zero->next = temp;
        zero = zero->next;
      } else if (temp->data == 1) {
        one->next = temp;
        one = one->next;
      } else {
        two->next = temp;
        two = two->next;
      }
      temp = temp->next;
    }
    zero->next = (oneHead->next) ? oneHead->next : twoHead->next;
    one->next = twoHead->next;
    two->next = nullptr;

    delete zeroHead;
    delete oneHead;
    delete twoHead;

    return zeroHead->next;
  }
  Node *brute(Node *head) {
    int count0s = 0;
    int count1s = 0;
    int count2s = 0;
    Node *temp = head;
    while (temp) {
      if (temp->data == 0)
        count0s++;
      else if (temp->data == 1)
        count1s++;
      else
        count2s++;
      temp = temp->next;
    }
    temp = head;
    int count = 0;
    while (temp && count < count0s) {
      temp->data = 0;
      temp = temp->next;
      count++;
    }
    while (temp && count < count0s + count1s) {
      temp->data = 1;
      temp = temp->next;
      count++;
    }
    while (temp && count < count0s + count1s + count2s) {
      temp->data = 2;
      temp = temp->next;
      count++;
    }
    return head;
  }
};