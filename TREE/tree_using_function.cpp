#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node *left;
    node *right;
    node(int val){
        data = val;
        left = NULL;
        right = NULL;
    }
};

// funtion for binarytree
node* binarytree(){
    int x;
    cin>>x;
    if(x == -1){
        return NULL;
    }
    node * temp = new node (x);
    cout<<"Enter the left child of "<<x<<" : ";
    temp -> left = binarytree();
    cout<<"Enter the right child of "<<x<<" : ";
    temp -> right = binarytree();
    return temp;
}
int main(){
    cout<<"Enter the root element : ";
    node *root;
    root = binarytree();
}