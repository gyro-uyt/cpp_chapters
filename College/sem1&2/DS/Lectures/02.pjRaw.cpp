#include <iostream>

struct Node
{
    int data;
    Node *next;
};

int main()
{
    Node *head = nullptr, *newNode = nullptr, *temp = nullptr;
    int choice = 1;

    while (choice)
    {
        newNode = new Node; // Allocate memory using C++'s 'new' keyword
        std::cout << "Enter data: ";
        std::cin >> newNode->data;
        newNode->next = nullptr;

        if (head == nullptr)
        {
            head = temp = newNode; // Initialize head and temp for the first node
        }
        else
        {
            temp->next = newNode;
            temp = newNode;
        }

        std::cout << "Do you want to continue (0,1)? ";
        std::cin >> choice;
    }

    // Print the linked list
    temp = head;
    std::cout << "Linked list data: ";
    while (temp != nullptr)
    {
        std::cout << temp->data << " ";
        temp = temp->next;
    }

    // Clean up allocated memory
    temp = head;
    while (temp != nullptr)
    {
        Node *toDelete = temp;
        temp = temp->next;
        delete toDelete;
    }

    return 0;
}
