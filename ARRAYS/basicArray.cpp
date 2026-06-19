#include<iostream>
using namespace std ;
int main(){
    int n ;
    cout<<"Enter the no of elements :";
    cin>>n;
    int arr[n];
    for(int i =0 ; i<n; i++){
        cin>>arr[i];
        // cout<<arr[i];
    }
    for(int i =0; i < n; i++){
        cout<<arr[i]<<" ";
    }
    

}