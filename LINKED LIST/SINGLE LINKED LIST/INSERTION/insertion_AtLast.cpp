#include <iostream>
using namespace std;

class node {
public:
    int data;
    node *next;

    // Constructor
    node(int value) {
        data = value;
        next = NULL;
    }
};

int main() {

    node *head = NULL;

    int n;
    cout << "Enter the no of elements in array: ";
    cin >> n;

    int arr[n];

    cout << "Enter the elements of array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Insertion at end
    for (int i = 0; i < n; i++) {
        // create a node
        node *tail = head;
        if(head == NULL){
            head = new node(arr[i]);
        }else{
            node *tail = head;
            while(tail->next != NULL){
                tail= tail->next;
            }
            tail->next = new node (arr[i]);
        }
        

    }

    // Printing linked list
    node *temp = head;

    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }

    return 0;
}