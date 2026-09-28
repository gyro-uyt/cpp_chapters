#include <bits/stdc++.h>
using namespace std;

class ListNode {
public:
  int val;
  ListNode *next;
  ListNode() : val(0), next(nullptr) {}
  ListNode(int x) : val(x), next(nullptr) {}
  ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
  ListNode *optimal(ListNode *head) {
    ListNode *slow = head;
    ListNode *fast = head;

    while (fast != nullptr && fast->next != nullptr) {
      fast = fast->next->next;
      slow = slow->next;
    }
    return slow;
  }
  ListNode *bruteForce(ListNode *head) {
    int count = 0;
    ListNode *temp = head;
    while (temp != nullptr) {
      count++;
      temp = temp->next;
    }
    temp = head;
    for (int i = 0; i < count / 2; i++)
      temp = temp->next;
    return temp;
  }
};
