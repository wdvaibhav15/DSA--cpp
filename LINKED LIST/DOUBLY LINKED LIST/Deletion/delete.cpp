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


    // // deletion from starting
    // if(head != NULL){
    //     node *temp = head;
    //     head = head->next;
    //     delete temp;
    //     if(head){
    //         head->prev = NULL;
    //     }
    // }

    // deletion from last
    if(head != NULL){
        if(head->next == NULL){
            delete head;
            head = NULL;
        }
        else{
            node *current = head;
            while(current->next){
                current = current->next;
            }
            current->prev->next = NULL;
            delete current;
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