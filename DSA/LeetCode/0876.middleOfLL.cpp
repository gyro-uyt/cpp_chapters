#include <bits/stdc++.h>
using namespace std;

class Solution {
    public:
        ListNode* middleNode(ListNode* head) {
                int count = 0;
                        ListNode* temp = head;
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
}