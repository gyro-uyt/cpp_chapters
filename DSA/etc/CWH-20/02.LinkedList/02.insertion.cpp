/*
Insertion in a Linked List
    case I:   Insert at the begining  => O(1)
    case II:  Insert in between       => O(n)
    case III: Insert at the end       => O(n)
    case IV:  Insert after a node     => O(1)   ,in this we're already given the pointer, hence we don't need to traverse, we can directly insert
*/
#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;

    Node(int x) {
        data = x;
        next = nullptr;
    }
};
class Methods {
  public:
    void traversal(Node* ptr) {
        while(ptr != nullptr) {
            cout << ptr->data << " ";
            ptr = ptr->next;
        }
        cout << endl;
    }
    Node* insertAtFirst(Node* head, int element) { // returns the new head ptr
        Node* ptr = new Node(element);
        ptr->next = head;
        return ptr;
    }
    void insertAtIndex(Node* head, int index, int element) {
        Node* ptr = new Node(element);
        Node* tmp = head;
        int counter = 0;
        while(counter != index - 1) {
            tmp = tmp->next;
            counter++;
        }
        ptr->next = tmp->next;
        tmp->next = ptr;
    }
    void insertAtEnd(Node* head, int element) {
        Node* ptr = new Node(element);
        Node* tmp = head;
        while(tmp->next != nullptr) {
            tmp = tmp->next;
        }
        tmp->next = ptr;
    }
    void insertAfterNode(Node* head, Node* prevNode, int element) {
        Node* ptr = new Node(element);

        ptr->next = prevNode->next;
        prevNode->next = ptr;
    }
};

int main() {

    Node* head = new Node(7);
    Node* second = new Node(14);
    Node* third = new Node(21);
    Node* fourth = new Node(28);
    head->next = second;
    second->next = third;
    third->next = fourth;

    Methods m1;
    m1.traversal(head);
    head = m1.insertAtFirst(head, 1);
    m1.traversal(head);
    m1.insertAtIndex(head, 3, 69);
    m1.traversal(head);
    m1.insertAtEnd(head, 70);
    m1.traversal(head);
    m1.insertAfterNode(head, third, 100);
    m1.traversal(head);

    return 0;
}