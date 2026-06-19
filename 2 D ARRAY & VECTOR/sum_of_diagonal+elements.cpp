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

    if(m==n){
        // input 
    cout<<"Enter the elements of the array :";
    for(int i =0; i<n ; i++){
        for(int j = 0 ; j<m; j++){
            cin>>arr[i][j];
        }
    }

        int frontdia = 0;
    for(int i = 0; i<n;i++){
        frontdia += arr[i][i];  
    }
    cout<<"sum of frontdiagonal "<<frontdia<<endl;
    int backdia = 0;
    int i = 0 ;
    int j= m-1;
    while(j>=0){
        backdia+= arr[i][j];
        i++;
        j--;
    }
     cout<<"sum of backdiagonal "<<backdia<<endl;
     cout<< "sum of both diagonals is :"<<frontdia+backdia;

    }
    else
        cout<<"Please Enter a square matrix";

}