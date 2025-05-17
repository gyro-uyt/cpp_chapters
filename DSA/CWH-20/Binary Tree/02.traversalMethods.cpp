// PreOrder Traversal in Binary Tree
#include <iostream>
using namespace std;

struct node {
    int data;
    node *left;
    node *right;

    node(int value) {
        data = value;
        left = NULL;
        right = NULL;
    }
};
void preOrder(node *root) {
    if(root != NULL) {
        cout << root->data << " ";
        preOrder(root->left);
        preOrder(root->right);
    }
}
void postOrder(node *root) {
    if(root != NULL) {
        postOrder(root->left);
        postOrder(root->right);
        cout << root->data << " ";
    }
}
void inOrder(node *root) {
    if(root != NULL) {
        inOrder(root->left);
        cout << root->data << " ";
        inOrder(root->right);
    }
}
/*
        2
       / \
      4   5
     /   / \
    3   9   1
*/
int main() {
    node *p1 = new node(2);
    node *p2 = new node(4);
    node *p3 = new node(5);
    node *p4 = new node(3);
    node *p5 = new node(9);
    node *p6 = new node(1);

    p1->left = p2;
    p1->right = p3;
    p2->left = p4;
    p3->left = p5;
    p3->right = p6;

    cout << "Preorder: ";
    preOrder(p1);
    cout << endl;

    cout << "Postorder: ";
    postOrder(p1);
    cout << endl;

    cout << "Inorder: ";
    inOrder(p1);
    cout << endl;

    return 0;
}