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
    if (r==c){
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
     cout<<"Rotated matrix by 90 degree is :"<<endl;
     // transpose
     for(int i = 0; i< r-1 ; i++){
        for(int j = i+1 ; j<r ; j++){
            swap(matrix[i][j], matrix[j][i]);
        }
     }
     // reverse in rows
     for(int i = 0 ; i <r ; i++){
        int start = 0, end = r-1;
        while(start<end){
            swap(matrix[i][start], matrix[i][end]);
            start++;
            end--;
        }
     }
     for(int i = 0 ; i < r ; i++){
        for(int j = 0; j < c ; j ++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
    }
    else
    cout<<"rotation is not possible:";
}