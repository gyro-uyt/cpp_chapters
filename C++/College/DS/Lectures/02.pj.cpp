#include <iostream>
using namespace std;

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
        newNode = new Node; // Allocate memory in C++ using 'new'
        // newNode = (struct Node*)malloc(sizeof(struct Node));

        cout << "Enter data: ";
        cin >> newNode->data; // C++ input
        // printf("Enter data");
        // scanf("%d", &newNode->data);

        newNode->next = nullptr; // C++ uses nullptr instead of 0
        // newNode->next = 0;

        if (head == nullptr)
        {
            head = temp = newNode;
        }
        else
        {
            temp->next = newNode;
            temp = newNode;
        }

        cout << "Do you want to continue (0,1)? ";
        cin >> choice;
        // printf("Do you want to continue (0,1)?");
        // scanf("%d", &choice);
    }

    // Display the linked list
    temp = head;
    cout << "Linked list data: ";
    while (temp != nullptr)
    {                              // C++ uses nullptr
        cout << temp->data << " "; // C++ output
        // printf("%d", temp->data);

        temp = temp->next;
    }

    // Clean up allocated memory
    temp = head;
    while (temp != nullptr)
    {
        Node *toDelete = temp;
        temp = temp->next;
        delete toDelete; // C++ uses 'delete' to free memory
        // free(toDelete);
    }

    return 0;
}
