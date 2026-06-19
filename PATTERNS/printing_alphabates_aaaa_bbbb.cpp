// a a a a a 
// b b b b b 
// c c c c c 
// d d d d d 
// e e e e e
#include<iostream>
using namespace std;
int main(){
    int n  = (char)65; 
    int m = (char)65;
    cout<<"Enter number of rows :";
    cin>> n; // number of rows 
    cout<<"Enter number of column :";
    cin>>m; // number of columns
    cout<<"The patterns is :"<<endl;

    for(int i = 97 ; i <= 97+n -1 ; i++){// for rows
        for(int j = 1 ; j <= m ; j++){// for columns
           cout<<(char)i<<" ";
        }
        cout<<endl;
    }
}