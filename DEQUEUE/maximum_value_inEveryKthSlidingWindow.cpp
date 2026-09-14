#include<iostream>
#include<queue>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of array: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int k;
    cout<<"Enter the value of k: ";
    cin>>k;
    
    queue<int>q;
    // putting k values in queue
    for(int i = 0 ; i < k -1 ; i++){
        q.push(arr[i]);
    }
    // finding the maximum value from queue
    for(int i = k-1 ; i < n ; i++){
        q.push(arr[i]);
        int maxi = 0 ;
        for(int j = 0 ; j < q.size() ; j++){
            maxi = max(maxi , q.front());
            q.push(q.front());
            q.pop();
        }
        cout<<maxi<<" ";
        q.pop();
    }

}