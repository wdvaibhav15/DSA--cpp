
#include <iostream>
#include <algorithm>
using namespace std;

class Node {
public:
    int data;
    int height;
    Node *left;
    Node *right;

    Node(int value) {
        data = value;
        height = 1;
        left = right = NULL;
    }
};

// Get height of a node
int getHeight(Node *node) {
    if (node == NULL)
        return 0;

    return node->height;
}

// Get balance factor
int getBalance(Node *node) {
    if (node == NULL)
        return 0;

    return getHeight(node->left) - getHeight(node->right);
}

// Right Rotation
Node* rightRotate(Node *y) {
    Node *x = y->left;
    Node *T2 = x->right;

    // Perform rotation
    x->right = y;
    y->left = T2;

    // Update heights
    y->height = 1 + max(getHeight(y->left), getHeight(y->right));
    x->height = 1 + max(getHeight(x->left), getHeight(x->right));

    return x;
}

// Left Rotation
Node* leftRotate(Node *x) {
    Node *y = x->right;
    Node *T2 = y->left;

    // Perform rotation
    y->left = x;
    x->right = T2;

    // Update heights
    x->height = 1 + max(getHeight(x->left), getHeight(x->right));
    y->height = 1 + max(getHeight(y->left), getHeight(y->right));

    return y;
}

// Insert node into AVL Tree
Node* insert(Node *root, int value) {

    // Normal BST insertion
    if (root == NULL)
        return new Node(value);

    if (value < root->data)
        root->left = insert(root->left, value);

    else if (value > root->data)
        root->right = insert(root->right, value);

    else
        return root; // Duplicate values not allowed

    // Update height
    root->height = 1 + max(getHeight(root->left),
                           getHeight(root->right));

    // Check balance factor
    int balance = getBalance(root);

    // LL Case
    if (balance > 1 && value < root->left->data)
        return rightRotate(root);

    // RR Case
    if (balance < -1 && value > root->right->data)
        return leftRotate(root);

    // LR Case
    if (balance > 1 && value > root->left->data) {
        root->left = leftRotate(root->left);
        return rightRotate(root);
    }

    // RL Case
    if (balance < -1 && value < root->right->data) {
        root->right = rightRotate(root->right);
        return leftRotate(root);
    }

    return root;
}

// Inorder Traversal
void inorder(Node *root) {
    if (root == NULL)
        return;

    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

// Preorder Traversal
void preorder(Node *root) {
    if (root == NULL)
        return;

    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);
}

int main() {

    Node *root = NULL;

    root = insert(root, 10);
    root = insert(root, 20);
    root = insert(root, 30);
    root = insert(root, 40);
    root = insert(root, 50);
    root = insert(root, 25);
    root = insert(root, 35);
    root = insert(root, 45);

    cout << "Inorder Traversal: ";
    inorder(root);

    cout << "\nPreorder Traversal: ";
    preorder(root);

    cout << endl;

    return 0;
}

