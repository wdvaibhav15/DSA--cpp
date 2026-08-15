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

node* CreateDLL(int arr[], int index, int size, node* back) {
    if(index == size) {
        return NULL;
    }
    node* temp = new node(arr[index]);
    temp->prev = back;
    temp->next = CreateDLL(arr, index + 1, size, temp);

    return temp;
}

int main() {
    node* head = NULL;

    int value;
    cout << "Enter number of elements: ";
    cin >> value;

    int arr[value];
    cout << "Enter elements: ";
    for(int i = 0; i < value; i++) {
        cin >> arr[i];
    }
    head = CreateDLL(arr, 0, value, NULL);

    node* current = head;
    cout << "Doubly Linked List: ";
    while(current != NULL) {
        cout << current->data << " -> ";
        current = current->next;
    }
    cout<<"NULL";

    return 0;
}