#include<iostream>
using namespace std;
int main(){
    int n ;// rows
    cout<<"Enter the no of rows :";
    cin>> n;
    int m ;// columnsns
    cout<<"Enter the no of colum :";
    cin>>m;
    int arr[n][m];

    // input 
    cout<<"Enter the elements of the array :";
    for(int i =0; i<n ; i++){
        for(int j = 0 ; j<m; j++){
            cin>>arr[i][j];
        }
    }
    cout<<"elements before reversing :";
    for(int i =0; i<n ; i++){
        for(int j = 0 ; j<m; j++){
            cout<<arr[i][j]<<" ";
        }
    }
    cout<<endl;
    for(int i = 0 ; i< n ; i++){
        int start = 0, end = m-1;
        while(start<end){
            swap(arr[i][start],arr[i][end]);
            start++;
            end--;
        }
    }
    cout<<"elements after revering : ";
    for(int i =0; i<n ; i++){
        for(int j = 0 ; j<m; j++){
            cout<<arr[i][j]<<" ";
        }
    }
}