// 12345
// 678910
// 1112131415
// 1617181920
#include<iostream>
using namespace std;
int main(){
    int n , m;
    cout<<"Enter number of rows :";
    cin>> n; // number of rows 
    cout<<"Enter number of column :";
    cin>>m; // number of columns
    cout<<"The patterns is :"<<endl;
    int count = 1;
    for(int i = 1 ; i <= n ; i++){// for rows
        for(int j = 1 ; j <= m ; j++){// for columns
           cout<<count<<" ";
           count++;
        }
        cout<<endl;
    }
}