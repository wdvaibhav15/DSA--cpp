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
    for (int i = 0; i < n; i++) {
        int value;
        cin >> value;
        node* temp = new node(value);
        if (head == NULL) {
            head = temp;
            tail = temp;
            tail->next = head;
        }
        else {
            tail->next = temp;
            tail = temp;
            tail->next = head;
        }
    }


    // Printing linked list
    cout << "Circular Singly Linked List: ";

    if (head != NULL) {
        node* current = head;
        do {
            cout << current->data << " -> ";
            current = current->next;
        } while (current != head);
        cout << "HEAD";
    }

    return 0;
}