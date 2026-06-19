#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of elements in array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of array :"<<endl;
    for(int i = 0 ; i <n ; i++){
        cin>>arr[i];

    }
    cout<<"The array:"<<endl;
    for(int i = 0 ; i <n ; i++){
        cout<<arr[i]<< " ";

    }
    cout<<endl;
    cout<<"Enter the searching element :";
    int m; 
    cin>>m;
    for(int i =0; i<n; i++){
        if ( arr[i]==m){
            cout<<"element :"<<arr[i]<< " found at index "<<i;
        }
        
    }

}