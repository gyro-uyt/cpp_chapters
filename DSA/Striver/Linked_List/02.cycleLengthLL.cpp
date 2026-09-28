#include <bits/stdc++.h>
using namespace std;

class Node {
public:
  int data;
  Node *next;

  Node(int x) {
    data = x;
    next = NULL;
  }
};

class Solution {
public:
  int lengthOfLoop(Node *head) {
    Node *slow = head;
    Node *fast = head;
    int count = 0;
    while (fast != nullptr && fast->next != nullptr) {
      fast = fast->next->next;
      slow = slow->next;
      if (fast == slow) {
        slow = slow->next;
        count++;
        while (slow != fast) {
          slow = slow->next;
          count++;
        }
        return count;
      }
    }
    return 0;
  }
};