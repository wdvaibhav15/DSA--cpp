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
    node* head = NULL;
    node* tail = NULL;
    int n;
    cout << "Enter the no of elements: ";
    cin >> n;

    int arr[n];
    cout << "Enter the elements: ";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Create linked list
    for(int i = 0; i < n; i++) {
        node* temp = new node(arr[i]);
        if(head == NULL) {
            head = temp;
            tail = temp;
        } else {
            tail->next = temp;
            tail = temp;
        }
    }

    int k;
    cout << "Enter the no of rotations: ";
    cin >> k;
    int count = 0;
    node* temp = head;

    while(temp != NULL) {
        count++;
        temp = temp->next;
    }
    k = k % count;

    if(k != 0) {
        int steps = count - k;
        node* current = head;
        node* prev = NULL;

        while(steps--) {
            prev = current;
            current = current->next;
        }
        prev->next = NULL;
        node* newHead = current;
        node* last = current;

        while(last->next != NULL) {
            last = last->next;
        }
        last->next = head;
        head = newHead;
    }
    temp = head;

    cout << "Rotated linked list: ";
    while(temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }

    return 0;
}