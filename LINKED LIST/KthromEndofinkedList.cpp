#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int data) {
        this->data = data;
        this->next = nullptr;
    }
};

int getKthFromLast(Node* head, int k) {
    if (head == nullptr || k <= 0) {
        return -1;
    }

    Node* first = head;
    Node* second = head;

    // Move first pointer k steps ahead
    for (int i = 0; i < k; i++) {
        if (first == nullptr) {
            return -1; // k is greater than the number of nodes
        }
        first = first->next;
    }

    // Move both pointers until first reaches nullptr
    while (first != nullptr) {
        first = first->next;
        second = second->next;
    }

    return second->data;
}

int main() {
    // --- Example Test ---
    Node* head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(4);

    cout << "2nd node from end: " << getKthFromLast(head, 2) << endl; // Output: 3

    return 0;
}