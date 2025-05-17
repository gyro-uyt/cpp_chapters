#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

class Methods {
  public:
    void LLTraversal(Node* ptr) {
        while(ptr != nullptr) {
            cout << ptr->data << " ";
            ptr = ptr->next;
        }
        cout << endl;
    }
};

int main() {
    // allocates memory for nodes in the linked list in heap, bcz, this dynamic memory alocation
    Node* head = new Node;
    Node* second = new Node;
    Node* third = new Node;

    // Link first & second nodes
    head->data = 7;
    head->next = second;

    // Link second & third nodes
    second->data = 14;
    second->next = third;

    // Terminate the list at third node
    third->data = 21;
    third->next = nullptr;

    Methods m1;
    m1.LLTraversal(head);

    return 0;
}