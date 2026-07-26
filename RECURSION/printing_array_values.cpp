#include<iostream>
using namespace std;
int printArray(int arr[],int index, int n){
    if(index == n){
        return 0;
    }
    else{
        cout<<arr[index]<<" ";
        printArray(arr,index+1, n);
    }
}
int main(){
    int n;
    cout<<"Enter the no of elements: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements: "<<endl;
    for(int i = 0 ; i<n; i++){
        cin>>arr[i];
    }
    cout<<"Printing the elements of an Array using recursion: ";
    printArray(arr, 0, n);
    
}