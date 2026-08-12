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
    cout << "Enter the value of k: ";
    cin >> k;

    node* fast = head;
    node* slow = head;
    for(int i = 0; i < k; i++) {
        fast = fast->next;
    }
    if(fast == NULL) {

        node* temp = head;
        head = head->next;

        delete temp;
    }
    else {
        while(fast->next != NULL) {

            fast = fast->next;
            slow = slow->next;
        }
        node* temp = slow->next;
        slow->next = temp->next;
        delete temp;
    }

    // Print linked list
    node* temp = head;

    while(temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }

    return 0;
}