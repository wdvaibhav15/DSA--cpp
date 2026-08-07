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
    node *HEAD;
    HEAD = new node(10);
    cout<<HEAD->data<<endl;
    cout<<HEAD->next<<endl;

}