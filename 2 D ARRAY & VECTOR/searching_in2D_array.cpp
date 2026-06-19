#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    // details of array
    int r ;
    cout<<"Enter the number of rows in given array:";
    cin>>r;
    int c;
    cout<<"Enter the number of columns in given array:";
    cin>>c;
    vector<vector<int>>matrix(r , vector<int>(c));
    cout<<"Enter the elements of the array:\n";
    for(int i = 0 ;i < r ; i++){
        for(int j = 0 ;j < c ; j++){
            cin>>matrix[i][j];
        }
    }
    cout<<"Entered matrix:\n";
    for(int i = 0 ;i < r ; i++){
        for(int j = 0 ;j < c ; j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<"\n";
    }
    int x;
    cout<<"Enter the searching element: ";
    cin>>x;
   // searching ...... the element:
    for (int i = 0; i<r; i++){
        if(matrix[i][0]<x && x<matrix[i][c-1]){
            int start= 0 , end = c -1;
            while(start<end){
               int mid =(start+end)/2;
               if( matrix[i][mid]==x){
                return 1;
                }
                else if(matrix[i][mid]>x){
                    end = mid - 1;
                }
                else
                start = mid +1;
               
            }
            return 0;
        }
    }


}