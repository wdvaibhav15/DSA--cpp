#include<iostream>
#include<queue>
using namespace std;

void display(queue<int> q){
    while(!q.empty()){
        cout<<q.front()<<" ";
        q.pop();
    }
    cout<<endl;
}
int main(){
    int n ;
    cout<<"Enter the number of elements in array: ";
    cin>>n;

    int arr[n];
    cout<<"Enter the elements of array: ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    int k;
    cout<<"Enter the value of k: ";
    cin>>k;

    // creating a queue
    queue<int> q;
    for(int i = 0 ; i < k -1 ; i ++){
        q.push(arr[i]); // if k = 3 {1,2}
    }

    for(int i = k - 1; i < n; i++){
        
        q.push(arr[i]); // if k = 3 {1,2,3}
        display(q); 
        q.pop();
        
    }

}