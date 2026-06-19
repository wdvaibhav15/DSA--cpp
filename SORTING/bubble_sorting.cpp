#include<iostream>
using namespace std ;
int main(){
    int n ;
    cout<<"Enter the no of array elements:";
    cin>>n;
    int arr[n];
    cout<<"Enter the array elements:"<<endl;
    for(int i = 0 ; i<n; i++){
        cin>> arr[i];
    }
    cout<<"the entered elements:"<<" ";
    for(int i = 0 ; i<n; i++){
        cout<< arr[i]<<" ";
    }
    for(int i = n-2; i >= 0 ; i--)
    {
        for(int j = 0 ; j <=i ; j++)
        {
            if(arr[j]>arr[j+1])
            {
                swap( arr[j],arr[j+1]);
            }
        }
    }
    cout<<endl;
    cout<<"the sorted array:";
    for (int i = 0 ; i<n ; i++)
    {
        cout<<arr[i]<<" ";
    }
}