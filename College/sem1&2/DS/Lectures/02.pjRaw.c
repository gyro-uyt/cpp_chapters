#include <stdio.h>
#include <malloc.h>

void main()
{
    struct Node
    {
        int data;
        struct Node *next;
    };
    struct Node *head = 0, *newnode, *temp;

    int choice = 1;
    while (choice)
    {
        newnode = (struct Node *)malloc(sizeof(struct Node));
        printf("Enter data: ");
        scanf("%d", &newnode->data);
        newnode->next = 0;

        if (head == 0)
        {
            head = temp = newnode;
        }
        else
        {
            temp->next = newnode;
            temp = newnode;
        };
        
        printf("do you want to continue (0,1)? ");
        scanf("%d", &choice);
    }

    // Print the linked list
    temp = head;
    printf("Linked list data: ");
    while (temp != 0)
    {
        printf("%d", temp->data);
        printf(" ");
        temp = temp->next;
    }
    printf("\n");
}