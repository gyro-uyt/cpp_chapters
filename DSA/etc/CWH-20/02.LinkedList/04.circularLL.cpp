/*

*/
#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;

    Node(int x): data(x) {}
};
class Methods {
  public:
    void traversal(Node* head) {
        Node* ptr = head;
        // this loop will never start as for the first value is head itself,
        // so either increase the ptr once manually or better use do-while which is for these tasks
        // while(ptr != head) {
        //     cout << ptr->data << " ";
        //     ptr = ptr->next;
        // }
        do {
            cout << ptr->data << " ";
            ptr = ptr->next;
        } while(ptr != head);
        cout << endl;
    }
    void insertAtFirst(Node*& head, int element) {
        Node* ptr = new Node(element);
        Node* p = head->next;
        while(p->next != head) {
            p = p->next;
        }
        p->next = ptr;
        ptr->next = head;
        head = ptr;
    }
};

int main() {

    Node* head = new Node(2);
    Node* second = new Node(4);
    Node* third = new Node(8);
    Node* fourth = new Node(16);
    Node* tail = new Node(32);

    head->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = tail;
    tail->next = head;

    Methods m1;
    m1.traversal(head);
    m1.insertAtFirst(head, 69);
    m1.traversal(head);

    return 0;
}