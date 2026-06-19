#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
 int main(){
    int r , c ;
    cout<<"Enter the rows of the matric :";
    cin>>r;
    cout<<"Enter the columns of the matric :";
    cin>>c;
    vector<vector<int> > matrix(r , vector<int>(c));
    // input the elements 
    cout<<"Enter the elements of the matrix :";
    for(int i = 0 ; i < r ; i++){
        for(int j = 0; j < c ; j ++){
            cin>>matrix[i][j];
        }
    }
    cout<<"Entered matrix :"<<endl;
    for(int i = 0 ; i < r ; i++){
        for(int j = 0; j < c ; j ++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"Printing spiralform"<<endl;
    int top = 0, bottom = r-1 ,left = 0, right = c-1;
    while(top<=bottom && left<= right){
        // move right
        for(int j = left ;j <= right ;j++){
            cout<<matrix[top][j]<<" ";
        }
            top++;
        // move down
        for(int i = top ;i <= bottom ;i++){
            cout<<matrix[i][right]<<" ";
        }
            right--;
        // move left
        if(top<=bottom){
        for(int j = right ;j >= left ;j--){
            cout<<matrix[bottom][j]<<" ";
             }
             bottom--;
        }
            
        //move up
        if(left<=right){
        for(int i = bottom ;i >= top ;i--){
            cout<<matrix[i][left]<<" ";
              }
              left++;
            }
    
    }

}