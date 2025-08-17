#include <stdio.h>
#include <stdlib.h> // <malloc.h> is unnecessary; use <stdlib.h> for portability

struct list
{
    int data;
    struct list *next;
};

struct list *head = NULL; // Global head to retain linked list data

void insertNode()
{
    struct list *newnode, *temp;

    newnode = (struct list *)malloc(sizeof(struct list));
    if (newnode == NULL)
    {
        printf("Memory allocation failed!\n");
        return;
    }

    printf("Enter a number: ");
    scanf("%d", &newnode->data);
    newnode->next = NULL; // Initialize the next pointer

    if (head == NULL)
    {
        head = newnode; // First node
    }
    else
    {
        temp = head;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = newnode; // Insert at the end
    }
}

void displayList()
{
    struct list *temp = head;
    if (temp == NULL)
    {
        printf("Linked list is empty.\n");
        return;
    }
    printf("Linked list: ");
    while (temp != NULL)
    {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

int main()
{
    int choice;
    while (1)
    {
        printf("\n1. Insert node\n2. Display list\n3. Exit\nEnter choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            insertNode();
            break;
        case 2:
            displayList();
            break;
        case 3:
            return 0;
        default:
            printf("Invalid choice! Try again.\n");
        }
    }
}
