#include <iostream>
using namespace std;

class node { 
    public:
        int data;
        node *next;

        node(int val)
        {
            data = val;
            next = NULL;
        }
};

int main() {
    node *head = NULL;
    node *tail = NULL;

    int n;
    cout << "Enter the no of elements: ";
    cin >> n;

    int arr[n];

    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // Create linked list
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

    int k;
    cout << "Enter k, which elements you want to remove :  ";
    cin >> k;

    if (k <= 0) {
        cout << "Invalid value of k";
        return 0;
    }
    
    node *current = head;
    node *prev = NULL;
    int count = 1;

    while (current != NULL) {
        if (count == k) {
            if (prev == NULL) {
                head = current->next;
                delete current;
                current = head;
            } else {
                prev->next = current->next;
                delete current;
                current = prev->next;
            }
            count = 1;
        } else  {
            prev = current;
            current = current->next;
            count++;
        }
    }

    cout<<"updated linked list : ";
    // Print linked list
    current = head;

    while (current != NULL)
    {
        cout << current->data << " ";
        current = current->next;
    }

    return 0;
}