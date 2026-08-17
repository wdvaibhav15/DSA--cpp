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
    // remove duplicates from linked list
    node * current = head->next;
    node * prev = head;
    while(current){
        if(prev->data == current->data){
            prev->next = current->next;
            delete current;
            current = prev->next;
        }else{
            prev = prev->next;
            current = current->next;
        }
    }

    node* temp = head;
    // print the linked list 
    temp = head;
    while(temp != NULL) {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL";
    

    return 0;
}