#include<iostream>
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
int main(){
    node *head = NULL;

    int n;
    cout << "Enter the no of elements in array: ";
    cin >> n;

    int arr[n];

    cout << "Enter the elements of array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    // inserting index
    int index;
    cout << "Enter the index: ";
    cin >> index;
    // inserting element
    int element;
    cout << "Enter the element: ";
    cin >> element;
    
}