#include<iostream>
using namespace std;
class node {
    public:
    int data;
    node *next;

    node(int value){
        data = value;
        next = NULL;
    }
};
int main(){
    node *head = NULL;
    node *tail = NULL;

    int n;
    cout<<"Enter the no of elements in array: ";
    cin>>n;

    int arr[n];
    cout<<"Enter the elements of array: ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    // create linked list
    for (int i = 0; i< n; i++){
        node *temp = new node(arr[i]);
        if(head == NULL){
            head = temp;
            tail = temp;
        }else{
            tail->next = temp;
            tail = temp;
        }
    }

    // take index
    int index;
    cout<<"Enter:which node you want to delete : ";
    cin>>index;

    index--;


    if(index == 1){
        node *temp = head;
        head = head->next;
        delete temp;
        //if one node is there only
        if(head == NULL){
            tail = NULL;
        }
    }
    else{
        node *current = head;
        node *prev = NULL;
        for (int i = 1; i < index; i++) {
            prev = current;
            current = current->next;
        }
        prev->next = current->next;
        if (current == tail) {
            tail = prev;
        }

        delete current;
    }
    node *temp = head;
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    
}