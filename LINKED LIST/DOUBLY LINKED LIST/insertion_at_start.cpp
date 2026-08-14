#include<iostream>
using namespace std;
class node {
public:
    int data;
    node* next;
    node* prev;
    node(int value) {
        data = value;
        next = NULL;
        prev = NULL;
    }
};
int main() {
    node* head = NULL;
    int value;
    cout << "Enter value: ";
    cin >> value;
    node* temp = new node(value);
    //Linked list is empty
    if(head == NULL) {
        head = temp;
    }
    // Linked list already exists
    else {
        node* current = head;
        while(current->next != NULL) {
            current = current->next;
        }
        current->next = temp;
        temp->prev = current;
    }
    node* current = head;
    while(current != NULL) {
        cout << current->data << " -> ";
        current = current->next;
    }

    cout << "NULL";

    return 0;
}