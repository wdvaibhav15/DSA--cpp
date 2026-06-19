#include<iostream>
using namespace std;
int main(){
    // ----------------------ROW AND COLUMNS OF FIRST MATRIC--------------------------
    int n ;// rows
    cout<<"Enter the no of rows of first matrix:";
    cin>> n;
    int m ;// columnsns
    cout<<"Enter the no of columns of first matrix :";
    cin>>m;
     // ----------------------ROW AND COLUMNS OF SECOND MATRIC--------------------------
    int p ;// rows
    cout<<"Enter the no of rows of second matrix :";
    cin>> p;
    int q ;// columnsns
    cout<<"Enter the no of columns of second matrix :";
    cin>>q;
    
    if(m!=p){
        cout<<"Multiplication is not possible";
        return 0;
    }
    //--------------- ELEMENTS OF FIRST MATRIX--------------------------------
    
     int arr1[n][m];

    // input 
    cout<<"Enter the elements of the first matrix :";
    for(int i =0; i<n ; i++){
        for(int j = 0 ; j<m; j++){
            cin>>arr1[i][j];
        }
    }
    
    //--------------- ELEMENTS OF SECOND MATRIX--------------------------------
    
    
    int arr2[p][q];

    // input 
    cout<<"Enter the elements of the second matrix :";
    for(int i =0; i<n ; i++){
        for(int j = 0 ; j<m; j++){
            cin>>arr2[i][j];
        }
    }

    // ---------------matrix to store the addition------------
    int multi[n][m] ;

    //--------------matrix additiono ----------------------------
    

        for(int i =0; i<n ; i++) {
             for(int j = 0 ; j<q; j++) {
                for(int k= 0; k<m; k++){
                 multi[i][j]+= arr1[i][k]*arr2[k][j];
                 }
            }
        }

        //---------------- printing addition------------
        cout<<"multiplication of the first and second matrix is :";
        for(int i =0; i<n ; i++) {
             for(int j = 0 ; j<q; j++) {
                cout<<multi[i][j]<<" ";
                
                 }
            }
        
}