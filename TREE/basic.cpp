#include <iostream>
#include <queue>
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

// Function to print the tree level-by-level for verification
void levelOrderTraversal(node* root) {
    if (root == NULL) return;
    queue<node*> q;
    q.push(root);
    q.push(NULL); // Marker for next level

    while (!q.empty()) {
        node* temp = q.front();
        q.pop();

        if (temp == NULL) {
            cout << endl;
            if (!q.empty()) {
                q.push(NULL);
            }
        } else {
            cout << temp->data << " ";
            if (temp->left) q.push(temp->left);
            if (temp->right) q.push(temp->right);
        }
    }
}

int main() {
    int x;
    cout << "Enter the root node: ";
    cin >> x;

    queue<node*> q;
    node *root = new node(x);
    q.push(root);
    
    // Create tree
    while (!q.empty()) {
        node *temp = q.front();
        q.pop();

        // Left node
        int leftNode;
        cout << "Enter the left node of " << temp->data << " (-1 for NULL): ";
        cin >> leftNode;
        if (leftNode != -1) {
            temp->left = new node(leftNode);
            q.push(temp->left);
        }
        
        // Right node
        int rightNode;
        cout << "Enter the right node of " << temp->data << " (-1 for NULL): ";
        cin >> rightNode;
        if (rightNode != -1) {
            temp->right = new node(rightNode);
            q.push(temp->right);
        }
    }
    
    // Print the tree
    cout << "\nLevel Order Traversal of the Constructed Tree:\n";
    levelOrderTraversal(root);

    return 0;
}