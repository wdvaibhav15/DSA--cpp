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
        // Function to add an element to the queue
        void push(int x){
            if(rear == size - 1){
                cout<<"overflow"<<endl;
                return;
            }
            if(front == -1){
                front = 0;
                arr[rear] = x;
                cout<<arr[rear]<<" pushed into the queue"<<endl;
            }else{
                rear = rear + 1;
                arr[rear] = x;
                cout<<arr[rear]<<" pushed into the queue"<<endl;
            }
        }
        // Function to remove an element from the queue
        void pop(){
            if(rear == -1 || front > rear){
                cout<<"underflow"<<endl;
                return;
            }else if(front == rear){
                front = -1;
                rear = -1;
            }else{
                front = front + 1;
                cout<<arr[front - 1]<<" Element popped from the queue"<<endl;
            }
        }
        // Function to get the front element of the queue
        int first(){
            if(rear == -1 || front > rear){
                cout<<"underflow"<<endl;
                return -1;
            }else{
                cout<<arr[front]<<" is the front element of the queue"<<endl;
                return arr[front];
            }
        }
        //isEmpty function
        bool isEmpty(){
            if(rear == -1 || front > rear){
                return true;
            }else{
                return false;
            }
        }
        // isFull function
        bool isFull(){
            if(rear == size - 1){
                return true;
            }else{
                return false;
            }
        }
};
int main(){
    queue q(5);
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    q.push(6);
    q.pop();
    cout<<q.first();
    cout<<q.isEmpty();
    cout<<q.isFull();
}