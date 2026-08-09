#include <iostream>
using namespace std;

class node {
public:
    int data;
    node *next;

    node(int value) {
        data = value;
        next = NULL;
    }
};

node* deleteNode(node *head, int position) {
    if (head == NULL) {
        return NULL;
    }

    if (position == 1) {
        node *temp = head;
        head = head->next;
        delete temp;
        return head;
    }
    head->next = deleteNode(head->next, position - 1);
    return head;
}


int main() {

    node *head = NULL;
    node *tail = NULL;

    int n;
    cout << "Enter the no of elements: ";
    cin >> n;

    int arr[n];

    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++) {

        node *temp = new node(arr[i]);
        if (head == NULL) {
            head = temp;
            tail = temp;
        }
        else {
            tail->next = temp;
            tail = temp;
        }
    }

    int position;
    cout << "Enter which node you want to delete: ";
    cin >> position;
    head = deleteNode(head, position);


    // Print linked list
    node *temp = head;

    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }

    return 0;
}