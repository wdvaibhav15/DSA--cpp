#include<iostream>
#include<queue>
using namespace std;
class node {
    public:
    int data;
    node* next;
    node* prev;
    node(int val){
        data = val;
        next = NULL;
        prev = NULL;
    }
};

class dequeue{
    public:
    node* head;
    node* tail;
    dequeue(){
        head = NULL;
        tail = NULL;
    }
    // starting push
    void push_front(int val){
        node* temp = new node(val);
        // if no node is present
        if(head == NULL){
            head = temp;
            tail = temp;
            return;
        }
        // if nodes are present
        head = temp;
        head->next = tail;
        tail->prev = head;
        return;
    }

    // ending push
    void push_back(int val){
        // if no node is present
        node* temp = new node(val);
        if(head == NULL){
            head = temp;
            tail = temp;
            return;
        }
        // if nodes are present
        tail->next = temp;
        temp->prev = tail;
        tail = temp;
        return;
    }

    // starting pop
    void pop_front(){
        // if no node is present
        if(head == NULL){
            cout<<"underflow"<<endl;
            return;
        }
        // if only one node is present
        if(head == tail){
            node *temp = head;
            head = NULL;
            tail = NULL;
            delete temp;
            return;
            return;
        }
        // if more than one node is present
        node *temp = head;
        head = head->next;
        head->prev = NULL;
        delete temp;
        return;
    }

    // ending pop
    void pop_back(){
        // if no node is present
        if(tail == NULL){
            cout<<"underflow"<<endl;
            return;
        }
        // if only one node is present
        if(head == tail){
            node *temp = tail;
            head = NULL;
            tail = NULL;
            delete temp;
            return;
        }
        // if more than one node is present
        node *temp = tail;
        tail = tail->prev;
        tail->next = NULL;
        delete temp;
        return;
    }

    // starting peek
    int peek_front(){
        // if no node is present
        if(head == NULL){
            cout<<"underflow"<<endl;
            return -1;
        }
        return head->data;
    }

    // ending peek
    int peek_back(){
        // if no node is present
        if(tail == NULL){
            cout<<"underflow"<<endl;
            return -1;
        }
        return tail->data;
    }
};
int main(){
    dequeue dq;
    dq.push_front(1);
    dq.push_back(2);
    dq.push_front(3);
    dq.push_back(4);
    cout<<"peek front: "<<dq.peek_front()<<endl;
    cout<<"peek back: "<<dq.peek_back()<<endl;
    dq.pop_front();
    cout<<"peek front: "<<dq.peek_front()<<endl;
    cout<<"peek back: "<<dq.peek_back()<<endl;
    dq.pop_back();
    cout<<"peek front: "<<dq.peek_front()<<endl;
    cout<<"peek back: "<<dq.peek_back()<<endl;
}