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
  ListNode *addTwoNumbers(ListNode *l1, ListNode *l2) {
    ListNode *dummy = new ListNode();
    ListNode *temp = dummy;
    ListNode *p1 = l1;
    ListNode *p2 = l2;
    int carry = 0;
    while (p1 || p2 || carry) {
      int sum = 0;
      if (p1) {
        sum += p1->val;
        p1 = p1->next;
      }
      if (p2) {
        sum += p2->val;
        p2 = p2->next;
      }
      sum += carry;
      carry = sum / 10;
      temp->next = new ListNode(sum % 10);
      temp = temp->next;
    }
    return dummy->next;
  }
};