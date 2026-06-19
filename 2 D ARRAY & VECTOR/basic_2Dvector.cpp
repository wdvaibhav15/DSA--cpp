#include<iostream>
#include<vector>
#include<algorithm>
using namespace std ;
int main(){
    int r , c;
    cout<<"Enter the rows and columns of the given matrix :";
    cin>>r;
    cin>>c;

    vector<vector<int> > matrix(r , vector<int>(c));
    // input the elements
    cout<<"enter the elements of thr matrix:";
    for(int i = 0 ; i< r ; i++){
        for(int j = 0 ; j < c ; j++){
            cin>>matrix[i][j];
        }
    }

    cout<<"printing the elements of thr matrix:"<<endl;
    for(int i = 0 ; i< r ; i++){
        for(int j = 0 ; j < c ; j++){
            cout<<matrix[i][j]<<" ";
            
        }
        cout<<endl;
    }

    // to know the number of rows
    cout<<endl<<"rows = "<<matrix.size()<<endl;
    cout<<"columns = "<<matrix[0].size();

}