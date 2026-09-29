#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;
int main(){
    // min heap peiority queue
    priority_queue<int, vector<int>, greater<int>> q;

    // push inside the queue
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);

    // top elements
    cout<<"top elements: "<<q.top()<<" "<<endl;

    // size of the queue
    cout<<"size of queue: "<<q.size()<<endl;

    // printing the all elements
    cout<<"elements: ";
    while(!q.empty()){
        cout<<q.top()<<" ";
        q.pop();
    }

    // pop until the queue is empty
    while(!q.empty()){
        cout<<q.top()<<" ";
        q.pop();
    }

    
}