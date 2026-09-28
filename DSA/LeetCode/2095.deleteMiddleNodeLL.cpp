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
  ListNode *optimal(ListNode *head) {
    if (!head || !head->next)
      return nullptr;

    ListNode *slow = head;
    ListNode *fast = head;
    // doing one iteration here without moving slow, bcz we want to skip it's
    // one iteration so it stops one node behind middle node
    fast = fast->next->next;
    while (fast && fast->next) {
      slow = slow->next;
      fast = fast->next->next;
    }
    ListNode *front = slow->next;
    slow->next = front->next;
    delete front;
    return head;
  }
  ListNode *deleteMiddle(ListNode *head) {
    if (!head || !head->next)
      return nullptr;

    ListNode *slow = head;
    ListNode *fast = head;
    ListNode *prev = nullptr;
    while (fast && fast->next) {
      prev = slow;
      slow = slow->next;
      fast = fast->next->next;
    }
    prev->next = slow->next;
    delete slow;
    return head;
  }
};