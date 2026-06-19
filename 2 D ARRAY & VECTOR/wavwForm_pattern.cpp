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
    cout<<"Printing waveform"<<endl;
     for(int j = 0; j < c; j++){
        if(j%2==0){
            for(int i = 0 ; i < r ; i++){
                cout<<matrix[i][j]<<" ";
            }
        }
        else{
            for(int i = r-1; i>=0 ; i--){
                cout<<matrix[i][j]<<" ";
            }
        }
     }

 }