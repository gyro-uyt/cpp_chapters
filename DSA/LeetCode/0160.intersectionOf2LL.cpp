#include <bits/stdc++.h>
#include <set>
using namespace std;

struct ListNode {
  int val;
  ListNode *next;
  ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
  /*
  Logic:
    Suppose there are 2 lists of 6 & 9 length, we keep 2 ptrs on their heads and
  traverse them in their and their opposite row, then they must be at the end of
  lists i.e. nullptr, bcz

  A: 11 -> 12 -> 13 -> 14 ----------------> 8 -> 9 -> X
  B: 1 -> 2 -> 3 -> 4 -> 5 -> 6 -> 7 -----> 8 -> 9 -> X

  suppose pA, pB are kept A, B respectively then we traverse both simuntaneously
  as A is smaller than B pA will reach nullptr first and when it reaches there
  set it's value to B and again traverse till end and do similarly for pB also,
  doing so if there's common list they will collied and return that and if no
  common nodes then they'll collide in nullptr

  The point is:
    pA travelled 6 nodes of A + 9 nodes of B before reaching nullptr with pB
    pB travelled 9 nodes of B + 6 nodes of A before reaching nullptr with pA

  Now intersection or not they will collide at end bcz both would have traversed
  same distance, and if there common nodes then it must have collided before bcz
  their finish line is same and running same dist on same track
  */
  ListNode *optimal(ListNode *headA, ListNode *headB) {
    ListNode *tempA = headA;
    ListNode *tempB = headB;
    while (tempA != tempB) {
      tempA = (tempA) ? tempA->next : headB;
      tempB = (tempB) ? tempB->next : headA;
    }
    return tempA;
  }
  ListNode *better(ListNode *headA, ListNode *headB) {
    int lengthOfA = 0;
    int lengthOfB = 0;
    ListNode *tempA = headA;
    ListNode *tempB = headB;
    while (tempA) {
      tempA = tempA->next;
      lengthOfA++;
    }
    while (tempB) {
      tempB = tempB->next;
      lengthOfB++;
    }
    tempA = headA;
    tempB = headB;
    int behind = lengthOfA - lengthOfB;
    if (behind > 0) {
      while (behind > 0) {
        tempA = tempA->next;
        behind--;
      }
    } else if (behind < 0) {
      while (behind < 0) {
        tempB = tempB->next;
        behind++;
      }
    }
    while (tempA && tempB) {
      if (tempA == tempB)
        return tempA;
      tempA = tempA->next;
      tempB = tempB->next;
    }
    return nullptr;
  }
  ListNode *brute2(ListNode *headA, ListNode *headB) {
    ListNode *pA = headA;
    ListNode *pB = headB;
    while (pA) {
      while (pB) {
        if (pA == pB)
          return pA;
        pB = pB->next;
      }
      pA = pA->next;
      pB = headB;
    }
    return nullptr;
  }
  ListNode *bruteForce(ListNode *headA, ListNode *headB) {
    ListNode *pA = headA;
    ListNode *pB = headB;
    set<ListNode *> store;
    while (pA) {
      store.insert(pA);
      pA = pA->next;
    }
    while (pB) {
      if (store.find(pB) != store.end())
        return pB;
      pB = pB->next;
    }
    return nullptr;
  }
};