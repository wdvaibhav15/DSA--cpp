#include<iostream>
using namespace std;
class dequeue{
    public:
    int* arr;
    int size;
    int front;
    int rear;
    dequeue(int n){
        size = n;
        arr = new int[size];
        front = -1;
        rear = -1;
    }
    //isEmpty
    bool isEmpty(){
        if(front == -1 && rear == -1){
            return true;
        }
        return false;
    }
    //isFull
    bool isFull(){
        if((rear + 1) % size == front){
            return true;
        }
        return false;
    }
    // starting push
    void push_front(int x){
        // if no node is present
        if(front == -1){
            front = 0;
            rear = 0;
            arr[front] = x;
            cout<< x <<" pushed in front"<<endl;
            return;
        }
        // if nodes are present
        front = (front - 1 + size) % size;
        arr[front] = x;
        cout<< x <<" pushed in front"<<endl;
        return;
    }

    // ending push
    void push_back(int x){
        // if no node is present
        if(rear == -1){
            front = 0;
            rear = 0;
            arr[rear] = x;
            cout<< x <<" pushed in last"<<endl;
            return;
        }
        // if nodes are present
        rear = (rear + 1) % size;
        arr[rear] = x;
        cout<< x <<" pushed in last"<<endl;
        return;
    }

    // starting pop
    void pop_front(){
        // if no node is present
        if(front == -1){
            cout<<"underflow"<<endl;
            return;
        }
        // if nodes are present
        front = (front + 1) % size;
        cout<< arr[front] <<" popped from front"<<endl;
        return;
    }

    // ending pop
    void pop_back(){
         // if no node is present
         if(rear == -1){
            cout<<"underflow"<<endl;
            return;
         }
         // if nodes are present
         rear = (rear - 1 + size) % size;
         cout<< arr[rear] <<" popped from last"<<endl;
         return;

     }
     // peek front
     int peek_front(){
        // if no node is present
        if(front == -1){
            cout<<"underflow"<<endl;
            return -1;
        }
        // if nodes are present
        return arr[front];
     }
     // peek back
     int peek_back(){
        // if no node is present
        if(rear == -1){
            cout<<"underflow"<<endl;
            return -1;
        }
        // if nodes are present
        return arr[rear];
     }

     

};
int main(){
    dequeue dq(5);
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
    cout<<"peek back: "<<dq.peek_back()<<endl;}