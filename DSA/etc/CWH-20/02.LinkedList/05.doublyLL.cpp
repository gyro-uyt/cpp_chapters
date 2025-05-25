#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* prev;
    Node* next;

    Node(int x): data(x), prev(nullptr), next(nullptr) {}
};
class Methods {
  public:
    void traversal(Node* head) {
        Node* p = head;
        while(p != nullptr) {
            cout << p->data << " ";
            p = p->next;
        }
        cout << endl;
    }

};
int main() {

    Node* head = new Node(5);
    Node* second = new Node(15);
    Node* third = new Node(25);
    Node* tail = new Node(35);

    head->next = second;
    second->next = third;
    third->next = tail;

    second->prev = head;
    third->prev = second;
    tail->prev = third;

    Methods m1;
    m1.traversal(head);

    return 0;
}