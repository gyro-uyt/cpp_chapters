#include <iostream>
using namespace std;

class BinarySearchTree {
private:
  // Define the structure for each node in the tree
  struct Node {
    int data;
    Node *left;
    Node *right;

    // Constructor to create a new node
    Node(int value) {
      data = value;
      left = right = nullptr;
    }
  };

  Node *root;

public:
  // Constructor to initialize the root of the tree
  BinarySearchTree() { root = nullptr; }

  // Function to insert a new node into the BST
  void insert(int value) { root = insertHelper(root, value); }

  // Function for Inorder Traversal (Left, Root, Right)
  void inorder() { inorderHelper(root); }

  // Function to search a given value in the BST
  bool search(int value) { return searchHelper(root, value); }

private:
  // Helper function to insert a node into the BST
  Node *insertHelper(Node *node, int value) {
    if (node == nullptr) {
      return new Node(value);
    }

    if (value < node->data) {
      node->left = insertHelper(node->left, value);
    } else if (value > node->data) {
      node->right = insertHelper(node->right, value);
    }

    return node;
  }

  // Helper function for Inorder Traversal
  void inorderHelper(Node *node) {
    if (node != nullptr) {
      inorderHelper(node->left);
      cout << node->data << " ";
      inorderHelper(node->right);
    }
  }

  // Helper function to search a value in the BST
  bool searchHelper(Node *node, int value) {
    if (node == nullptr) {
      return false;
    }

    if (node->data == value) {
      return true;
    }

    if (value < node->data) {
      return searchHelper(node->left, value);
    } else {
      return searchHelper(node->right, value);
    }
  }
};

int main() {
  BinarySearchTree bst;

  // Inserting values into the BST
  bst.insert(20);
  bst.insert(10);
  bst.insert(30);
  bst.insert(5);
  bst.insert(15);
  bst.insert(25);
  bst.insert(40);

  // Performing Inorder Traversal
  cout << "Inorder Traversal: ";
  bst.inorder();
  cout << endl;

  // Searching for a value in the BST
  int searchValue = 15;
  if (bst.search(searchValue)) {
    cout << "Found " << searchValue << " in the BST!" << endl;
  } else {
    cout << "Could not find " << searchValue << " in the BST." << endl;
  }

  return 0;
}
