#include <iostream>
#include <vector>
using namespace std;

class node {
public:
    int data;
    node* left;
    node* right;

    node(int value) {
        data = value;
        left = right = NULL;
    }
};

node* insert(node* root, int val) {

    // if root node is null
    if (root == NULL) {
        return new node(val);
    }
    // if target is lesser than root
    if (val < root->data) {
        root->left = insert(root->left, val);
    }
    // if target is greater than root
    else {
        root->right = insert(root->right, val);
    }

    return root;
};
// preorder Traversal
void preorder(node* root) {
    if (root == NULL)
        return;

    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);
}

// Inorder Traversal
void inorder(node* root) {
    if (root == NULL)
        return;

    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}
// postrder Traversal
void postorder(node* root) {
    if (root == NULL)
        return;

    postorder(root->left);
    postorder(root->right);
    cout << root->data << " ";
}



int main() {

    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    vector<int> arr(n);

    cout << "Enter elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    node* root = NULL;

    for (int i = 0; i < n; i++) {
        root = insert(root, arr[i]);
    }
    cout << "preorder Traversal of BST: ";
    preorder(root);
    cout<<endl;
    cout << "inorder Traversal of BST: ";
    inorder(root);
    cout<<endl;
    cout << "postorder Traversal of BST: ";
    postorder(root);

    return 0;
}