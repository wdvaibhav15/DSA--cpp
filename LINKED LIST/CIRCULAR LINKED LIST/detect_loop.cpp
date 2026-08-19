#include <iostream>
using namespace std;

class node {
public:
    int data;
    node* next;
    node(int value) {
        data = value;
        next = NULL;
    }
};

int main() {
    node* head = NULL;
    node* tail = NULL;

    int n;
    cout << "Enter number of nodes: ";
    cin >> n;

    cout << "Enter elements: ";
    // Create circular linked list
    for (int i = 0; i < n; i++) {
        int value;
        cin >> value;
        node* temp = new node(value);
        // First node
        if (head == NULL) {
            head = temp;
            tail = temp;
        }
        else {
            tail->next = temp;
            tail = temp;
        }
    }
    if (head != NULL) {
        tail->next = head;
    }

    node *slow = head;
    node *fast = head;
    while(fast != NULL && fast->next != NULL) {
        slow = slow->next;
        fast = fast->next->next;
        if (slow == fast) {
            cout << "Contains loop." << endl;
            return 0;
        }
    }
    cout << "Containing not a loop." << endl;
    return 0;
}