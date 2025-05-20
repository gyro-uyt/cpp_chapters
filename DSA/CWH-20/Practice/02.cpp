#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
    Node(int data) {
        this->data = data;
        next = nullptr;
    }
};
class LinkedList {
    Node* head;
  public:
    LinkedList() {
        head = nullptr;
    }
    void display() {
        Node* temp = head;
        cout<<"Linked list: ";
        while(temp != nullptr) {
            cout << temp->data << " -> ";
            temp = temp->next;
        }
        cout << "null\n";
    }
    void insertAtBegining(int x) {
        Node* newNode = new Node(x);
        newNode->next = head;
        head = newNode;
    }
    void insertAtEnd(int x) {
        Node* newNode = new Node(x);
        Node* temp = head;
        while(temp->next != nullptr) {
            temp = temp->next;
        }
        temp->next = newNode;
    }
};
int main() {

    LinkedList l1;
    l1.insertAtBegining(1);
    l1.insertAtBegining(2);
    l1.insertAtBegining(3);
    l1.insertAtEnd(5);
    l1.display();
    return 0;
}