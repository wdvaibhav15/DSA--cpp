#include<iostream>
using namespace std;
class queue{
    int *arr;
    int front;
    int rear;
    int size;
    public:
    queue(int n){
        arr = new int[n];
        front = -1;
        rear = -1;
        size = n;
    }
    //isFull function
    bool isFull(){
        if((rear + 1) % size == front){
            return true;
        }else{
            return false;
        }
    }
    //isEmpty function
    bool isEmpty(){
        if(front == -1){
            return true;
        }else{
            return false;
        }
    }
    //Push function
    void push(int x){
        if(isFull()){
            cout<<"Queue is full"<<endl;
            return;
        }
        else if(isEmpty()){
            front = 0;
            rear = 0;
            arr[rear] = x;
            cout<<arr[rear]<<" pushed into the queue"<<endl;
        }else{
            rear = (rear + 1) % size;
            arr[rear] = x;
            cout<<arr[rear]<<" pushed into the queue"<<endl;
        }
        
    }
    //Pop function
    void pop(){
        if(isEmpty()){
            cout<<"Queue is empty"<<endl;
            return;
        }
        else if(front == rear){
            front = -1;
            rear = -1;
            cout<<"Queue is empty now"<<endl;
        }else{
            front = (front + 1) % size;
            cout<<arr[front]<<" Element popped from the queue"<<endl;
        }
    }
    //First function
    int first(){
        if(isEmpty()){
            cout<<"Queue is empty"<<endl;
            return -1;
        }
        cout<<arr[front]<<" is the front element of the queue"<<endl;
        return arr[front];
    }

};
int main(){
queue q(5);
q.push(1);
q.push(2);
q.push(3);
q.push(4);
q.pop();
q.push(5);
q.push(6);



}