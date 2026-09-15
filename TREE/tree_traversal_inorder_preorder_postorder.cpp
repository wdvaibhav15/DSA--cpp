#include <iostream>
using namespace std;

class node {
public:
    int data;
    node *left;
    node *right;
    node(int val) {
        data = val;
        left = NULL;
        right = NULL;
    }
};

// Recursive function with dynamic node prompting
node *binaryTree(string direction, int parentVal) {
    int x;
    if (parentVal == -1) {
        cout << "Enter the root element: ";
    } else {
        cout << "Enter the " << direction << " child of " << parentVal << " (-1 for NULL): ";
    }
    
    cin >> x;
    if (x == -1) {
        return NULL;
    }
    
    node *temp = new node(x);
    temp->left = binaryTree("left", x);
    temp->right = binaryTree("right", x);
    
    return temp;
}

// Preorder
void preOrder(node* root) {
    if (root == NULL) return;
    cout << root->data << " ";
    preOrder(root->left);
    preOrder(root->right);
}

// Inorder
void inOrder(node* root) {
    if (root == NULL) return;
    inOrder(root->left);
    cout << root->data << " ";
    inOrder(root->right);
}

// Postorder
void postOrder(node* root) {
    if (root == NULL) return;
    postOrder(root->left);
    postOrder(root->right);
    cout << root->data << " ";
}

int main() {
    node *root = binaryTree("", -1);
    
    cout << "\n--- Traversals ---" << endl;
    
    cout << "Preorder:  ";
    preOrder(root);
    cout << endl;

    cout << "Inorder:   ";
    inOrder(root);
    cout << endl;

    cout << "Postorder: ";
    postOrder(root);
    cout << endl;

    return 0;
}