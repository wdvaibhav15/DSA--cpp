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

int main() {
    node *head, *tail = NULL;

    int n;
    cout << "Enter the no of elements in array: ";
    cin >> n;

    int arr[n];
    cout << "Enter the elements of array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Create linked list from array
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

    // Take index
    int index;
    cout << "Enter the index: ";
    cin >> index;

    // Take element
    int element;
    cout << "Enter the element: ";
    cin >> element;

    // Check index
    if (index < 0 || index > n) {
        cout << "Invalid index";
        return 0;
    }

    // Insert at index 0
    if (index == 0) {

        node *temp = new node(element);

        temp->next = head;
        head = temp;
    }

    // Insert at other index
    else {

        node *tail = head;

        // Move tail to node before required index
        for (int i = 0; i < index - 1; i++) {
            tail = tail->next;
        }

        node *temp = new node(element);

        temp->next = tail->next;
        tail->next = temp;
    }

    // Print linked list
    node *temp = head;

    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }

    return 0;
}