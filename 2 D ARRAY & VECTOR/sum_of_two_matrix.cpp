#include<iostream>
using namespace std;
int main(){
    // ----------------------DETAINS OF FIRST MATRIC--------------------------
    int n ;// rows
    cout<<"Enter the no of rows of first matrix:";
    cin>> n;
    int m ;// columnsns
    cout<<"Enter the no of columns of first matrix :";
    cin>>m;
    int arr1[n][m];

    // input 
    cout<<"Enter the elements of the first matrix :";
    for(int i =0; i<n ; i++){
        for(int j = 0 ; j<m; j++){
            cin>>arr1[i][j];
        }
    }

    //--------------- DETAINS OF SECOND COLUMN--------------------------------
    
    int p ;// rows
    cout<<"Enter the no of rows of second matrix :";
    cin>> p;
    int q ;// columnsns
    cout<<"Enter the no of columns of second matrix :";
    cin>>q;
    int arr2[p][q];

    // input 
    cout<<"Enter the elements of the second matrix :";
    for(int i =0; i<n ; i++){
        for(int j = 0 ; j<m; j++){
            cin>>arr2[i][j];
        }
    }

    // ---------------matrix to store the addition------------
    int sum[n][m];

    //--------------matrix additiono ----------------------------
    if(n==p && m==q){

        for(int i =0; i<n ; i++) {
             for(int j = 0 ; j<m; j++) {
                sum[i][j]= arr1[i][j]+arr2[i][j];
                 }
            }
        }
    else
        cout<<"sum is not possible";

        //---------------- printing addition------------
        cout<<"addition of the first and second matrix is :";
        for(int i =0; i<n ; i++) {
             for(int j = 0 ; j<m; j++) {
                cout<<sum[i][j]<<" ";
                
                 }
            }
        
}