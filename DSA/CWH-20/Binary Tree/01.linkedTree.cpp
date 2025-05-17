// Linked Representation Of Binary Tree
#include <iostream>
using namespace std;

struct node
{
    int data;
    node *left;
    node *right;

    // creating the constructor
    node() {};
    node(int num)
    {
        data = num;
        left = NULL;
        right = NULL;
    }
};

int main()
{
    // Constructing the root node
    node *p;
    p = new node;
    // p = (struct node*) malloc(sizeof(struct node));  // C language syntax
    p->data = 2;
    p->left = NULL;
    p->right = NULL;

    // Constructing the second node
    node *p1 = new node;
    p1->data = 4;
    p1->left = NULL;
    p1->right = NULL;

    // Constructing the third node
    node *p2 = new node;
    p2->data = 7;
    p2->left = NULL;
    p2->right = NULL;

    // this construction of nodes violates DRY as you need to do same thing again and again, hence made the constructor
    node *p3 = new node(78);

    // Linking the root node with the left and right children
    p->left = p1;
    p->right = p2;

    return 0;
}