#include <bits/stdc++.h>
using namespace std;

// Definition for singly-linked list.
struct ListNode {
  int val;
  ListNode *next;
  ListNode() : val(0), next(nullptr) {}
  ListNode(int x) : val(x), next(nullptr) {}
  ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
  ListNode *mergeTwoLists(ListNode *list1, ListNode *list2) {
    ListNode *ptr1 = list1;
    ListNode *ptr2 = list2;

    ListNode dummy(-1);
    ListNode *temp = &dummy;

    while (ptr1 != nullptr && ptr2 != nullptr) {
      if (ptr1->val < ptr2->val) {
        temp->next = ptr1;
        ptr1 = ptr1->next;
      } else {
        temp->next = ptr2;
        ptr2 = ptr2->next;
      }
      temp = temp->next;
    }
    temp->next = (ptr1 != nullptr) ? ptr1 : ptr2;

    return dummy.next;
  }
};
