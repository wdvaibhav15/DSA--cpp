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

    cout << "Enter the elements of array: ";

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

    // Store values in reverse
    vector<int> res(n);

    node* temp = head;

    int i = n - 1;

    while(temp != NULL) {

        res[i] = temp->data;

        temp = temp->next;

        i--;
    }
    //reverse data in vector array
    cout<<"Reversed array: ";
    for(int i = 0; i < n ; i++) {
        cout<<res[i]<<" ";
    }

    // Reset head and tail
    head = NULL;
    tail = NULL;

    // Create reversed linked list
    for(int i = 0; i < n; i++) {

        node* temp = new node(res[i]);

        if(head == NULL) {

            head = temp;
            tail = temp;

        }
        else {

            tail->next = temp;
            tail = temp;
        }
    }

    // Print reversed linked list
    cout<<"\nReversed Linked List: ";
    node* temp2 = head;

    while(temp2 != NULL) {

        cout << temp2->data << " ";

        temp2 = temp2->next;
    }

    return 0;
}