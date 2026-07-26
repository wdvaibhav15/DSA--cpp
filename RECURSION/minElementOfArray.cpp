#include<iostream>
using namespace std;
int minElement(int arr[], int index, int n, int min){
    
    if(index == n-1){
        return min;
    }else{
        if(arr[index] > arr[index+1]){
            min = arr[index+1];
        }else{
            min = arr[index];
        }
        minElement(arr, index+1, n, min);
    }
    
}

int main(){
    int n;
    cout<<"Enter the number of elements in array : ";
    cin>>n;

    int arr[n];
    cout<<"Enter the elements of array: "<<endl;
    for(int i = 0 ; i<n; i++){
        cin>>arr[i];
    }

    int min = 0;
    cout<<"Min element of array is : "<< minElement(arr,0, n, min);
}