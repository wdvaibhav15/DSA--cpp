#include<iostream>
using namespace std;
int main(){
    int n ;
    cout<<"enter the no elements in an array:";
    cin>>n;
    int arr[n];
    cout<<"enter the elements of array"<<endl;
    for(int i = 0 ; i<n ; i++){
        cin>>arr[i];
    }
    cout<<"the entered elements of the array:"<<endl;
    for(int i = 0 ; i<n;i ++){
        cout << arr[i]<<" ";
    }
    
    for (int i = 0 ; i<n-1 ; i++){
        int index = i ;
        for (int j = i+1 ; j<n; j++)
        {
            if(arr[j]< arr[index]){
                index = j;
            }
        }
        swap(arr[i],arr[index]);
    }
    cout<<"the sorted array is :";
    for(int i = 0 ; i<n; i++){
        cout<< arr[i]<<" ";
    }
}
