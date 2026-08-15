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
    cout << "Enter number of elements: ";
    cin >> value;

    int arr[value];
    cout << "Enter elements: ";
    for(int i = 0; i < value; i++) {
        cin >> arr[i];
    }
    // create a linked list 
    for(int i = 0; i < value; i++) {
        node* temp = new node(arr[i]);
        if(head == NULL) {
            head = temp;
        } else {
            node* tail = head;
            while(tail->next != NULL) {
                tail = tail->next;
            }
            tail->next = temp;
            temp->prev = tail;
        }
    }

    //insert a new node at given position
    int position;
    cout << "Enter the position after you want to insert the node: ";
    cin >> position;

    // elements is to be inserted
    int data;
    cout << "Enter the data: ";
    cin >> data;
    // insert at index 0
    // if the linked list is empty
    if(position == 0) {
       if(head == NULL) {
           head = new node(data);
       }else{
        // if the linked list is not empty
           node* temp = new node(data);
           temp->next = head;
           head->prev = temp;
           head = temp;
       }
    }

    node* current = head;
    while(--position){
        current = current->next;
    }

    node* temp = new node(data);
    temp->next = current->next;
    temp->prev = current;
    current->next = temp;
    temp->next->prev = temp;

    if(current->next == NULL) {
        node *temp = new node(data);
        current->next = temp;
        temp->prev = current;
    }

    
    // print the linked list 
    temp = head;
    while(temp != NULL) {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL";
    

    return 0;
}