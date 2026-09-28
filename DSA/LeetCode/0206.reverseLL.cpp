#include <iostream>
using namespace std;

// LeetCode's ListNode definition
struct ListNode {
  int val;
  ListNode *next;
  ListNode() : val(0), next(nullptr) {}
  ListNode(int x) : val(x), next(nullptr) {}
  ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution1 {
public:
  ListNode *reverseList(ListNode *head) {
    ListNode *prv = nullptr;
    ListNode *tmp = head;
    ListNode *frt;
    while (tmp != nullptr) {
      frt = tmp->next;
      tmp->next = prv;
      prv = tmp;
      tmp = frt;
    }
    return prv;
  }
};

// Your LeetCode-style class
class Solution {
public:
  // TC: O(n), SC: O(1)
  ListNode *iterativeMethod(ListNode *head) {
    ListNode *temp = head;
    ListNode *prv = nullptr;
    while (temp != nullptr) {
      ListNode *nxt = temp->next;
      temp->next = prv;
      prv = temp;
      temp = nxt;
    }
    return prv;
  }

  // TC: O(n), SC: O(n)
  ListNode *recursiveMethod(ListNode *head) {
    if (head == nullptr || head->next == nullptr)
      return head;

    // [1 -> 2 -> 3 -> 4 -> x]
    ListNode *newHead = recursiveMethod(head->next);
    // head ==> [3 -> 4 -> x] <== newHead
    ListNode *front = head->next;
    front->next = head;
    // head ==> [3 -> <- 4] <== newHead
    head->next = nullptr;
    // head ==> [x <- 3 <- 4] <== newHead
    return newHead;
  }
};

// Helper: print linked list
void printList(ListNode *head) {
  while (head != nullptr) {
    cout << head->val << " ";
    head = head->next;
  }
  cout << endl;
}

// Helper: build linked list from vector
ListNode *buildList(initializer_list<int> vals) {
  ListNode *head = nullptr, *tail = nullptr;
  for (int v : vals) {
    ListNode *node = new ListNode(v);
    if (!head)
      head = tail = node;
    else {
      tail->next = node;
      tail = node;
    }
  }
  return head;
}

int main() {
  // Build test linked list
  ListNode *head = buildList({1, 2, 3, 4, 5});

  cout << "Original list: ";
  printList(head);

  Solution s;
  // head = s.reverseList(head);

  cout << "Reversed list: ";
  printList(head);

  ListNode *ex = buildList({1, 2});
  printList(ex);
  // ex = s.reverseList(ex);
  printList(ex);

  return 0;
}
