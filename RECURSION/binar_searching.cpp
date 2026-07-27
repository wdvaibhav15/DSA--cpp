#include<iostream>
using namespace std;
int binarySearch(int arr[], int start, int end, int key){
    if(start>end){
        return -1;
    }else{
        int mid = (start+end)/2;
        if(arr[mid] == key){
            return mid;
        }else if(arr[mid]>key){
            return binarySearch(arr, start, mid-1, key);
        }else{
            return binarySearch(arr, mid+1, end, key);
        }
    }
}
int main(){
    int n;
    cout<<"Enter the number of elements in array :";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of array in increasing or decreasing order only :"<<endl;
    for(int i = 0 ; i < n ; i++){
        cin>>arr[i];
    }
    int key;
    cout<<"Enter the key you want to find in the array :";
    cin>>key;
    if(binarySearch(arr, 0, n-1, key) == -1){
        cout<<"Element not found in the array."<<endl;
    }else{
        cout<<"Element found at index :"<<binarySearch(arr, 0, n-1, key)<<endl;
    }
}