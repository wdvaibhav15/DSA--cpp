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

    // deletion
        tail = head;

        while (tail->next->next != NULL) {
            tail = tail->next;
        }
        delete tail->next;
        tail->next = NULL;
    
    
    

    node *temp = head;
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    
}