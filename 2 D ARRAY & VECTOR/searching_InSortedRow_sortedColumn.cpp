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
   
    
         int i = 0 , j = c-1;
         while(i <r && j>=0){
            if(matrix[i][j]==x){
                cout<<"found at index: [" <<i<<" , "<<j<<"]";
                break;

            }
            else if(matrix[i][j]>x)
            j--;
            else
            i++;
         }
         return 0;

}