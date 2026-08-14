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
    node* current = NULL;

    int n;
    cout << "Enter the number of elements of array: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements of array: ";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    for(int i = 0; i < n; i++) {
        // If list is empty
        if(head == NULL) {
            head = new node(arr[i]);
            current = head;
        }
        // If list already exists
        else {
            node* temp = new node(arr[i]);
            
            //reverse printing
            // temp->next = head;
            // head->prev = temp;
            // head = temp;

            //forword printing
            current->next = temp;
            temp->prev = current;
            current = temp;
        }
    }

    // Print linked list
    current = head;
    while(current != NULL) {
        cout << current->data << " -> ";
        current = current->next;
    }
    cout << "NULL";

    return 0;
}