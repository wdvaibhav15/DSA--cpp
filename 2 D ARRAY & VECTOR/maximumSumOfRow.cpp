#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the no of rows of first matrix:";
    cin>> n;
    int m ;// columnsns
    cout<<"Enter the no of columns of first matrix :";
    cin>>m;
    int arr[n][m];

    // input 
    cout<<"Enter the elements of the first matrix :";
    for(int i =0; i<n ; i++){
        for(int j = 0 ; j<m; j++){
            cin>>arr[i][j];
        }
    }
    int i;
      int sum = INT8_MIN;
      int index= -1;
      for( i = 0 ; i <n ;i++){
        int totalSum = 0;
        for(int j = 0 ; j < m ; j++){
            totalSum+= arr[i][j];
            if(totalSum>sum){
                sum = totalSum;
                index = i;
            }
        }
      }
      cout<<"total sum is :"<<sum<<endl;
      cout<<"the row is having greater sum :"<<i;

   

   
        
}