#include<iostream>
#include<vector>
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
    cout << "Enter the no of elements in array: ";
    cin >> n;

    int arr[n];

    cout << "Enter the elements of array: "<<endl;

    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Create original linked list
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

    node *slow = head;
    node *fast = head;

    while (fast != NULL && fast->next != NULL) {
        slow= slow->next;
        fast = fast->next->next;
    }

    cout<<"Middle element is: ";
    cout << slow->data;
}