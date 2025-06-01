/*
Deletion in a Linked List
    case I:   Delete the first node             => O(1)
    case II:  Deletion a node in between        => O(n)
    case III: Delete the last node              => O(n)
    case IV:  Delete a node with a given value  => O(1)
*/
#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;

    Node(int x): data(x), next(nullptr) {}
};
class Methods {
    Node* head;
    Node* tail;
  public:
    void traversal(Node* head) {
        Node* ptr = head;
        while(ptr != nullptr) {
            cout << ptr->data << " ";
            ptr = ptr->next;
        }
        cout << endl;

    }
    void deleteFirst(Node*& head) {
        Node* ptr = head;
        head = head->next;
        delete ptr;
    }
    void deleteIndex(Node*& head, int index) {
        Node*p = head;
        for(int i = 0; i < index - 1; i++) {
            p = p->next;
        }
        Node*q = p->next;
        p->next = q->next;
        delete q;
    }
    void deleteLast(Node*& head) {
        Node*p = head;
        while((p->next)->next != nullptr) {
            p = p->next;
        }
        delete p->next;
        p->next = nullptr;
    }
    void deleteValue(Node*& head, int value) {
        Node*p = head;
        while(p->next != nullptr && p->next->data != value) {
            p = p->next;
        }
        if(p->next == nullptr) {
            return;
        }

        Node* q = p->next;
        p->next = q->next;
        delete q;
    }
};
// 1 3 6 9 null
//   ^
int main() {

    Node* head = new Node(1);
    Node* second = new Node(3);
    Node* third = new Node(6);
    Node* fourth = new Node(9);

    head->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = nullptr;

    Methods m1;
    m1.traversal(head);
    // m1.deleteFirst(head);
    // m1.deleteIndex(head, 2);
    // m1.deleteLast(head);
    m1.deleteValue(head, 6);
    m1.traversal(head);

    return 0;
}