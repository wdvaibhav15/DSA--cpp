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
    int element;
    cout<<"Enter the element has to be search :";
    cin>>element;

    // checking ouputs
    
    for(int i =0; i<n ; i++){
        for(int j = 0 ; j<m; j++){
            if(arr[i][j]== element){
                cout<<element<<" is found at "<<i<<" th row and "<<j<<" th column:";
            return 0;
         }
            }
    }
    cout<<element<<" element is not in array:";
    



}