#include<iostream>
using namespace std;

class node {
public:
    int data;
    node* next;

    node(int val) {
        data = val;
        next = NULL;
    }
};

int main() {

    node* prev = NULL;
    node* head = NULL;
    node* curr = head;
    node* next = NULL;

    int n;
    cout << "Enter the no of elements in array: ";
    cin >> n;

    int arr[n];

    cout << "Enter the elements of array: ";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Create linked list
    for(int i = 0; i < n; i++) {

        node* temp = new node(arr[i]);

        if(head == NULL) {
            head = temp;
            curr = temp;
        }
        else {
            curr->next = temp;
            curr = temp;
        }
    }

    
    curr = head;

    // Reverse linked list
    while(curr != NULL) {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    head = prev;

    // Print reversed linked list
    curr = head;
    while(curr != NULL) {
        cout << curr->data << " ";
        curr = curr->next;
    }

    return 0;
}