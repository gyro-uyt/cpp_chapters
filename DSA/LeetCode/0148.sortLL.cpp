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
  // optimal (merge sort) TC: O(nlog n), SC: 0(log n) due to recursion stack
  ListNode *mergeTwoLists(ListNode *list1, ListNode *list2) {
    ListNode dummy(-1);
    ListNode *temp = &dummy;
    while (list1 && list2) {
      if (list1->val < list2->val) {
        temp->next = list1;
        list1 = list1->next;
      } else {
        temp->next = list2;
        list2 = list2->next;
      }
      temp = temp->next;
    }
    temp->next = (list1) ? list1 : list2;
    return dummy.next;
  }
  ListNode *findMiddle(ListNode *head) {
    ListNode *slow = head;
    ListNode *fast = head->next;
    while (fast && fast->next) {
      slow = slow->next;
      fast = fast->next->next;
    }
    return slow;
  }
  ListNode *sortList(ListNode *head) {
    if (!head || !head->next)
      return head;

    ListNode *middle = findMiddle(head);
    ListNode *p1 = head;
    ListNode *p2 = middle->next;
    middle->next = nullptr;

    p1 = sortList(p1);
    p2 = sortList(p2);

    return mergeTwoLists(p1, p2);
  }

  // brute force
  ListNode *brute(ListNode *head) {
    if (!head || !head->next)
      return head;
    multiset<int> store;
    ListNode *temp = head;
    while (temp) {
      store.insert(temp->val);
      temp = temp->next;
    }
    temp = head;
    for (auto i : store) {
      temp->val = i;
      temp = temp->next;
    }
    return head;
  }
};