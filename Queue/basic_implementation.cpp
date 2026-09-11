#include<iostream>
using namespace std;
class queue {
    int * arr;
    int front ;
    int rear;
    int size;
    public:
    queue(int n){
        arr = new int [n];
        front = -1;
        rear= -1 ;
        size = n;
    }

    // isfull function
    bool isfull(){
        if ((rear + 1) % size == front){
            return true;
        }
        else{
            return false;
        }
    }

    // isempty function
     bool isempty(){
        if( front == -1 || rear == -1){
            return true;
        }
        else{
            return false;
        }
     }

    //push function
    int push(int x){
        if(isfull()){
            cout<<"Overflow"<<endl;
            return -1;
        }
        if(isempty()){
            front = 0;
            rear = 0;
            arr[rear] = x;
            cout<<"Element pushed: "<<x<<endl;
            return 0;
        }
        rear = (rear + 1) % size;
        arr[rear] = x;
        cout<<"Element pushed: "<<x<<endl;
        return 0;
    }

    //pop function
    int pop() {
    if(isempty()) {
        cout << "Underflow" << endl;
        return -1;
    }
    int poppedValue = arr[front];
    if(front == rear) {
        front = -1;
        rear = -1;
    } 
    else {
        front = (front + 1) % size;
    }
    
    cout << "Element popped: " << poppedValue << endl;
    return poppedValue;
}

    // front function
    int getfront(){
        if(isempty()){
            cout<<"Queue is empty"<<endl;
            return -1;
        }
        cout<<"Front element is: "<<arr[front]<<endl;
        return arr[front];
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
    q.pop();
    q.getfront();
    q.push(6);
    q.push(7);
    q.push(8);
    q.getfront();
    return 0;
}