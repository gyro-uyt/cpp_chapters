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
  ListNode *optimal(ListNode *head, int n) {
    // we need to find nth node from last
    // that means we need to traverse to (length of LL - n)th node
    // we can do this in one iteration by 2 pointers, keeping 1 pointer at head
    // and 2nd at nth position from head and then traverse both simultaneously
    // till end, this way the 1st pointer would be at nth postion from end bcz
    // 2nd pointer was nth position ahead
    ListNode *p1 = head;
    ListNode *p2 = head;
    for (int i = 0; i < n; i++) {
      p2 = p2->next;
    }
    // delete first node or last node from end
    if (!p2) {
      ListNode *front = p1->next;
      delete head;
      return front;
    }
    while (p2->next) {
      p1 = p1->next;
      p2 = p2->next;
    }
    ListNode *front = p1->next;
    p1->next = front->next;
    delete front;
    return head;
  }
  ListNode *brute(ListNode *head, int n) {
    if (!head || !head->next)
      return nullptr;

    int length = 0;
    ListNode *temp = head;
    while (temp) {
      temp = temp->next;
      length++;
    }
    if (n == length) {
      ListNode *newHead = head->next;
      delete head;
      return newHead;
    }

    temp = head;
    int count = 0;
    while (temp && count < length - n - 1) {
      temp = temp->next;
      count++;
    }
    ListNode *next = temp->next;
    temp->next = temp->next->next;
    delete next;
    return head;
  }
};