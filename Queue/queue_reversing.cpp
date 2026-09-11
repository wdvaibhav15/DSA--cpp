#include<iostream>
#include<stack>
#include<queue>
using namespace std;
int main(){
    stack<int> s;
    queue<int>q;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);
    // operation to convert stack to queue
    while(!q.empty()){
        int element = q.front();
        s.push(element);
        q.pop();
    }
    // operation to convert queue to stack
    // for making queue revers
    while(!s.empty()){
        int element = s.top();
        q.push(element);
        s.pop();
    }
    cout<<"Elements in the queue after operations: ";
    while(!q.empty()){
        int element = q.front();
        cout<<element<<" ";
        q.pop();
    }
    cout<<endl;

}