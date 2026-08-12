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
        }
        else {
            tail->next = temp;
            tail = temp;
        }
    }

    int k;
    cout << "Enter the position to delete: ";
    cin >> k;

    // Invalid position
    if(k < 1 || k > n) {
        cout << "Invalid position";
        return 0;
    }

    // Delete first node
    if(k == 1) {

        node* temp = head;
        head = head->next;

        delete temp;
    }
    else {

        node* current = head;
        node* prev = NULL;

        // Move current to kth node
        for(int i = 1; i < k; i++) {

            prev = current;
            current = current->next;
        }

        // Remove kth node
        prev->next = current->next;

        delete current;
    }

    // Print linked list
    node* temp = head;

    while(temp != NULL) {

        cout << temp->data << " ";

        temp = temp->next;
    }

    return 0;
}