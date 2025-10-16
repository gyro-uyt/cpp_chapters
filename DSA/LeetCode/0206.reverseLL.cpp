#include <cstddef>
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

// Your LeetCode-style class
class Solution {
public:
  ListNode *reverseList(ListNode *head) {
    if (head == nullptr || head->next == nullptr)
      return head; // base case

    ListNode *newHead = reverseList(head->next); // reverse rest
    head->next->next = head; // make next node point back to current
    head->next = nullptr;    // cut original forward link
    return newHead;
  }
  ListNode *reverseList1(ListNode *head) {
    if (head == nullptr)
      return head;
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
  head = s.reverseList(head);

  cout << "Reversed list: ";
  printList(head);

  ListNode *ex = buildList({1, 2});
  printList(ex);
  ex = s.reverseList(ex);
  printList(ex);

  return 0;
}
