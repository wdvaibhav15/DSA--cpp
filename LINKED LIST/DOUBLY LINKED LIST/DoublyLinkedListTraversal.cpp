
#include <iostream>
#include <vector>

// class initialization
class Node {
public:
    int data;
    Node* next;
    Node* prev;

    Node(int x) {
        data = x;
        next = nullptr;
        prev = nullptr;
    }
};

class Solution {
public:
    std::vector<std::vector<int>> displayList(Node* head) {
        std::vector<std::vector<int>> ans;
        std::vector<int> forward, backward;

        Node* pre = head;

        // Forward traversal
        while (head != nullptr) {
            forward.push_back(head->data);
            head = head->next;
        }

        // Reset head
        head = pre;

        // Reach the last node
        while (head != nullptr && head->next != nullptr) {
            head = head->next;
        }

        // Backward traversal
        while (head != nullptr) {
            backward.push_back(head->data);
            head = head->prev;
        }

        ans.push_back(forward);
        ans.push_back(backward);

        return ans;
    }
};

int main() {
    int n;

    std::cout << "Enter number of nodes: ";
    std::cin >> n;

    if (n <= 0) {
        std::cout << "List is empty.\n";
        return 0;
    }

    Node* head = nullptr;
    Node* tail = nullptr;

    // Insert elements entered by the user
    std::cout << "Enter " << n << " elements:\n";

    for (int i = 0; i < n; i++) {
        int x;
        std::cin >> x;

        Node* newNode = new Node(x);

        if (head == nullptr) {
            head = newNode;
            tail = newNode;
        } else {
            tail->next = newNode;
            newNode->prev = tail;
            tail = newNode;
        }
    }

    Solution obj;
    std::vector<std::vector<int>> ans = obj.displayList(head);

    std::cout << "Forward traversal: ";
    for (int x : ans[0]) {
        std::cout << x << " ";
    }

    std::cout << "\nBackward traversal: ";
    for (int x : ans[1]) {
        std::cout << x << " ";
    }

    std::cout << "\n";

    // Free allocated memory
    Node* temp = head;
    while (temp != nullptr) {
        Node* nextNode = temp->next;
        delete temp;
        temp = nextNode;
    }

    return 0;
}
