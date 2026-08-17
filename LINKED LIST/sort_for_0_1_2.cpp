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

    int n1;
    cout << "Enter number of nodes in list: ";
    cin >> n1;
    cout << "Enter elements (only 0, 1, 2): ";

    // Create linked list
    for (int i = 0; i < n1; i++) {
        int value;
        cin >> value;
        node* temp = new node(value);
        if (head == NULL) {
            head = temp;
            tail = temp;
        }
        else {
            tail->next = temp;
            tail = temp;
        }
    }
    // Count 0, 1 and 2
    node* current = head;
    int count0 = 0;
    int count1 = 0;
    int count2 = 0;
    while (current) {
        if (current->data == 0) {
            count0++;
        }
        else if (current->data == 1) {
            count1++;
        }
        else if (current->data == 2) {
            count2++;
        }
        current = current->next;
    }
    current = head;
    // for 0
    while (count0--) {
        current->data = 0;
        current = current->next;
    }
    // for 1
    while (count1--) {
        current->data = 1;
        current = current->next;
    }
    // for 2
    while (count2--) {
        current->data = 2;
        current = current->next;
    }

    // Print sorted list
    cout << "Sorted list : ";
    current = head;
    while (current != NULL) {
        cout << current->data << " -> ";
        current = current->next;
    }
    cout << "NULL";
    return 0;
}