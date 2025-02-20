#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;

    Node(int value)
    {
        data = value;
        next = nullptr;
    }
};

class LinkedList
{
public:
    Node *head;
    LinkedList()
    {
        head = nullptr;
    }

    void insertAtEnd(int data)
    {
        Node *newNode = new Node(data);
        if (head == nullptr)
        {
            head = newNode;
            return;
        }
        Node *temp = head;

        while (temp->next != nullptr)
        {
            temp = temp->next;
        }
        temp->next = newNode;
    }
};

int main()
{
    LinkedList list;
    list.insertAtEnd(10);

    return 0;
}
// 1) write a program to create 2 function to arrange 10 elements in ascending anfd decending array
// 2) Linked list, traversal,
// 3) insertion of node
// 4) deletion of node