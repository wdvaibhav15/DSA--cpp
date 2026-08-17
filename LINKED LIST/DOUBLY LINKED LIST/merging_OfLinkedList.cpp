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
    //first list
    node* head1 = NULL;
    node* tail1 = NULL;

    int n1;
    cout << "Enter number of nodes in first list: ";
    cin >> n1;

    cout << "Enter elements in sorted order: ";
    for (int i = 0; i < n1; i++) {
        int value;
        cin >> value;
        node* temp = new node(value);
        if (head1 == NULL) {
            head1 = temp;
            tail1 = temp;
        }
        else {
            tail1->next = temp;
            tail1 = temp;
        }
    }
    //seconf list
    node* head2 = NULL;
    node* tail2 = NULL;

    int n2;
    cout << "Enter number of nodes in second list: ";
    cin >> n2;

    cout << "Enter elements in sorted order: ";
    for (int i = 0; i < n2; i++) {
        int value;
        cin >> value;
        node* temp = new node(value);
        if (head2 == NULL) {
            head2 = temp;
            tail2 = temp;
        }
        else {
            tail2->next = temp;
            tail2 = temp;
        }
    }

    //merge lists
    node* head = NULL;
    node* tail = NULL;
    // If first list is empty
    if (head1 == NULL) {
        head = head2;
    }
    // If second list is empty
    else if (head2 == NULL) {
        head = head1;
    }

    else {
        if (head1->data <= head2->data) {
            head = head1;
            tail = head1;
            head1 = head1->next;
        }
        else {
            head = head2;
            tail = head2;
            head2 = head2->next;
        }


        // Merge both linked lists
        while (head1 != NULL && head2 != NULL) {
            if (head1->data <= head2->data) {
                tail->next = head1;
                head1 = head1->next;
                tail = tail->next;
                tail->next = NULL;
            }
            else {
                tail->next = head2;
                head2 = head2->next;
                tail = tail->next;
                tail->next = NULL;
            }
        }
        //for remaining nodes
        if (head1 != NULL) {
            tail->next = head1;
        }
        else {
            tail->next = head2;
        }
    }
    // print the final list
    cout << "\nMerged Linked List: ";
    node* current = head;
    while (current != NULL) {
        cout << current->data << " -> ";
        current = current->next;
    }
    cout<<"NULL";
    return 0;
}