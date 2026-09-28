#include <bits/stdc++.h>
using namespace std;

struct ListNode {
  int val;
  ListNode *next;
  ListNode() : val(0), next(nullptr) {}
  ListNode(int x) : val(x), next(nullptr) {}
  ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
  ListNode *reverseLL(ListNode *head) {
    ListNode *prev = nullptr;
    ListNode *temp = head;
    while (temp) {
      ListNode *front = temp->next;
      temp->next = prev;
      prev = temp;
      temp = front;
    }
    return prev;
  }
  bool optimal(ListNode *head) {
    if (!head || !head->next)
      return true;

    ListNode *slow = head;
    ListNode *fast = head;
    while (fast->next && fast->next->next) {
      slow = slow->next;
      fast = fast->next->next;
    }
    ListNode *newHead = reverseLL(slow->next);
    ListNode *p1 = head;
    ListNode *p2 = newHead;
    while (p2) {
      if (p1->val != p2->val) {
        reverseLL(newHead);
        return false;
      }
      p1 = p1->next;
      p2 = p2->next;
    }
    reverseLL(newHead);
    return true;
  }
  
  bool bruteForce(ListNode *head) {
    stack<int> store;
    ListNode *temp = head;
    while (temp) {
      store.push(temp->val);
      temp = temp->next;
    }
    temp = head;
    while (!store.empty()) {
      if (temp->val != store.top())
        return false;
      temp = temp->next;
      store.pop();
    }
    return true;
  }
};