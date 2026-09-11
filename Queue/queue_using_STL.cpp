#include<iostream>
#include<queue>
using namespace std;
int main(){
    queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    cout<<"Front element: "<<q.front()<<endl;
    cout<<"Last element: "<<q.back()<<endl;
    cout<<"Size of queue: "<<q.size()<<endl;
    cout<<"Is queue empty? "<<boolalpha<<q.empty()<<endl;
    q.pop();
    cout<<"Front element after pop: "<<q.front()<<endl;
    cout<<"Size of queue after pop: "<<q.size()<<endl;
    return 0;
}