// 1 1 1 1 1 1 
// 2 2 2 2 2 2 
// 3 3 3 3 3 3 
// 4 4 4 4 4 4 
// 5 5 5 5 5 5 
// 6 6 6 6 6 6
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
        for(int j = 1 ; j <= m ; j++){// for columns
           cout<<i<<" ";
        }
        cout<<endl;
    }
}