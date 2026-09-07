#include <iostream>

using namespace std;

// Definition for singly-linked list.
class Node {
  public:
    int data;
    Node* next;
    Node(int data) {
        this->data = data;
        this->next = nullptr;
    }
};

class Solution {
  public:
    Node *insertAtEnd(Node *head, int x) {
        Node *newNode = new Node(x);
        
        // Edge case: If the list is empty, the new node becomes the head
        if (head == nullptr) {
            return newNode;
        }
        
        Node *current = head;
        // Traverse until we reach the last node
        while (current->next != nullptr) {
            current = current->next;
        }
        
        // Attach the new node at the end
        current->next = newNode;
        
        return head;
    }
};

// Helper function to print the linked list
void printList(Node *head) {
    Node *current = head;
    while (current != nullptr) {
        cout << current->data << " -> ";
        current = current->next;
    }
    cout << "nullptr" << endl;
}

int main() {
    Solution sol;
    Node *head = nullptr;

    // Test insertions
    head = sol.insertAtEnd(head, 10);
    head = sol.insertAtEnd(head, 20);
    head = sol.insertAtEnd(head, 30);

    cout << "Linked List: ";
    printList(head);

    return 0;
}