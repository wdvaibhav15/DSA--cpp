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

    int arr[] = {2, 4, 6, 8, 10};

    // Insert elements at the beginning
    for (int i = 0; i < 5; i++) {

        // Linked list is empty
        if (head == NULL) {
            head = new node(arr[i]);
        }
        else {
            // Linked list is not empty
            node *temp ;
            temp= new node(arr[i]);

            temp->next = head;

            head = temp;
        }
    }

    // Print linked list
    node *temp = head;

    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }

    return 0;
}

