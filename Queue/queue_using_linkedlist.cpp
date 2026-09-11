#include <iostream>
using namespace std;

//linkedlist
class node {
public:
    int data;
    node* next;
    node(int val){
        data = val;
        next = NULL;
    }
};

// queue
class queue {
    node *front;
    node *rear;
public:
    queue(){
        front = NULL;
        rear = NULL;
    }

    // Is empty function
    bool isempty(){
        if (front == NULL){
            return true;
        }
        else{
            return false;
        }
    }

    // Push function
    void push(int x){
        node *temp = new node(x);
        if(front == NULL){
            front = temp;
            cout<< "Element pushed: " << x << endl;
            rear = temp;
        }
        else{
            rear->next = temp;
            cout<< "Element pushed: " << x << endl;
            rear = temp;
        }
    }

    // Pop function
    void pop(){
        if(isempty()){
            cout << "Queue is empty" << endl;
            return;
        }
        node *temp = front;
        cout<< "Element popped: " << front->data << endl;
        front = front->next;
        if(front == NULL){
            rear = NULL;
        }
        
        delete temp;
    }
    int getfront(){
        if(isempty()){
            cout << "Queue is empty" << endl;
            return -1;
        }
        return front->data;
    }
};

int main(){
    queue q;
    q.push(1);
    q.push(2);
    q.push(3);
    cout << "Front element is: " << q.getfront() << endl;
    q.pop();
    cout << "Front element is: " << q.getfront() << endl;

    return 0;
}