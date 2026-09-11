#include<iostream>
#include<queue>
using namespace std;
int main(){
    queue<int>q;
    int n;
    cout<<"Enter the number of elements you want to push into the queue: ";
    cin>>n;

    cout<<"Enter the "<<n<<" elements: ";
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        q.push(x);
    }

    // after operations
    cout<<"Elements in the queue after operations: ";
    while(n>0){
        int element = q.front();
        cout<<element<<" ";
        q.pop();
        q.push(element);
        n--;
    }
}