#include <bits/stdc++.h>
using namespace std;

struct ListNode {
  int val;
  ListNode *next;
  ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
  // 2 people running on Circular track at different speeds are bound to meet
  // again, if not then it's not circular, why? think of relative speed if one
  // is moving v1 and other at v2 and v2 > v2 then relatively person1 is idle
  // and person2 running at (V2-v1) & bcz it's circle he'll meet for sure
  bool optimal(ListNode *head) {
    ListNode *fast = head;
    ListNode *slow = head;
    while (slow) {
      slow = slow->next;
      fast = fast->next->next;
      if (slow == fast)
        return true;
    }
    return false;
  }
  bool brute(ListNode *head) {
    unordered_set<ListNode *> store;
    ListNode *temp = head;
    while (temp) {
      if (store.find(temp) != store.end())
        return true;
      store.insert(temp);
      temp = temp->next;
    }
    return false;
  }
};

int main() {
  ListNode *head = new ListNode(3);
  head->next = new ListNode(2);
  head->next->next = new ListNode(0);
  head->next->next->next = new ListNode(-4);

  Solution s1;
  cout << s1.optimal(head) << endl;

  return 0;
}