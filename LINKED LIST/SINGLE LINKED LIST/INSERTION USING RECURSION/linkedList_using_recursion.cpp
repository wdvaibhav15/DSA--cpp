#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node *next;
    node(int value){
        data = value;
        next = NULL;
    }
};

node* CreateLinkedList(int arr[], int index, int size){
    //base case
    if(index == size){
        return NULL;
    }
    //recursive case
    node *temp = new node(arr[index]);
    temp->next = CreateLinkedList(arr, index+1, size);
    return temp;
};
int main(){
    node *head = NULL;
    int arr[]={2,4,6,8,10};

    head = CreateLinkedList(arr, 0, 5);

    //printing
    node *temp = head;
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }

}