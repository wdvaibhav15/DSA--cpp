#include<iostream>
using namespace std;
int  main(){
    int n;
    cout<<"Enter the no of elements:";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements:"<<endl;
    for(int i = 0 ; i<n; i++){
        cin>>arr[i];
    }
    cout<<"elements before swapping :";
    for(int i = 0 ; i<n; i++){
        cout<<arr[i];
    }
    cout<<endl;
    int i=0 ,j=n-1,temp;
    while(i<j){
        swap(arr[i],arr[j]);
        // temp = arr[i];
        // arr[i]= arr[j];
        // arr[j]=temp;
        i++;
        j--;
    }
    cout<<"elements after swapping :";
    for(int i = 0 ; i<n; i++){
        cout<<arr[i];
    
    }
}