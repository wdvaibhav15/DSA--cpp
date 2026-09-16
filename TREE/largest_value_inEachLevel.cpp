#include <iostream>
#include <vector>
#include <queue>
#include <climits> // Required for INT_MIN

using namespace std;

class Node {
public: // Make members and constructor accessible outside the class
    int data;
    Node* left;
    Node* right;
    
    Node(int val) {
        data = val;
        left = right = nullptr;
    }
};

class Solution {
public:
    vector<int> largestValues(Node* root) {
        vector<int> ans;
        if (root == nullptr)
            return ans;
        
        queue<Node*> q;
        q.push(root);
        
        while (!q.empty()) {
            int levelSize = q.size();
            int maxval = INT_MIN;
            
            for (int i = 0; i < levelSize; i++) {
                Node* temp = q.front();
                q.pop();
                
                maxval = max(maxval, temp->data);
                
                if (temp->left != nullptr)
                    q.push(temp->left);
                
                if (temp->right != nullptr)
                    q.push(temp->right);
            }
            ans.push_back(maxval);
        }
        return ans;
    }
};

int main() {
    // Constructing the sample tree:
    Node* root = new Node(1);
    root->left = new Node(3);
    root->right = new Node(2);
    root->left->left = new Node(5);
    root->left->right = new Node(3);
    root->right->right = new Node(9);

    Solution obj;
    vector<int> result = obj.largestValues(root);

    cout << "Largest value in each level: ";
    for (int val : result) {
        cout << val << " ";
    }
    cout << endl;

    return 0;
}