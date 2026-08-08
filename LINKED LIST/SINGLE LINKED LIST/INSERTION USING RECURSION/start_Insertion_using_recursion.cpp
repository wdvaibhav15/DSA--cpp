#include<iostream>
using namespace std;
class node {
    public:
    int data;
    node *next;

    node(int value){
        data= value;
        next = NULL;
    }
};

node* Insert_atStarting(int arr[], int index, int size, node *prev) {
    // base case
    if(index == size){
        return prev;
    }else{
        // recursive case
        node *temp = new node(arr[index]);

        temp->next = prev;
        return Insert_atStarting(arr, index+1, size,temp);
        
    }
    
}
int main(){

    node *head = NULL;
    int n;
    cout<<"Enter the no of elements in array: ";
    cin>>n;

    int arr[n];
    cout<<"Enter the elements of array: ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

     head = Insert_atStarting(arr, 0, n,NULL);

    node *temp = head;
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }


    return 0;
}