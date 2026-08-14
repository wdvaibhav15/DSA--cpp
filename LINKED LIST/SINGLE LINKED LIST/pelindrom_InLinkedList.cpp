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

    
    node* current = head;
    vector<int> ans;
    while(current != NULL) {
        ans.push_back(current->data);
        current = current->next;
    }

    // Check palindrome
    int i = 0;
    int j = ans.size() - 1;
    bool palindrome = true;
    while(i < j) {
        if(ans[i] != ans[j]) {
            palindrome = false;
            break;
        }
        i++;
        j--;
    }
    if(palindrome) {
        cout << "Linked List is Palindrome";
    }
    else {
        cout << "Linked List is NOT Palindrome";
    }

    return 0;
}