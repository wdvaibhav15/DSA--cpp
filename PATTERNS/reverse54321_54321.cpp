// 5 4 3 2 1
// 5 4 3 2 1
// 5 4 3 2 1
// 5 4 3 2 1
// 5 4 3 2 1
#include<iostream>
using namespace std;
int main(){
    int n , m;
    cout<<"Enter number of rows :";
    cin>> n; // number of rows 
    cout<<"Enter number of column :";
    cin>>m; // number of columns
    cout<<"The patterns is :"<<endl;
    for(int i = 1 ; i <= n ; i++){// for rows
        for(int j = 0 ; j < m ; j++){// for columns
           cout<<m-j<<" ";
        }
        cout<<endl;
    }
}