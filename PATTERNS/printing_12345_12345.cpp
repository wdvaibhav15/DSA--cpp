// 1 2 3 4 5 6 
// 1 2 3 4 5 6 
// 1 2 3 4 5 6 
// 1 2 3 4 5 6 
// 1 2 3 4 5 6 
// 1 2 3 4 5 6 
// #include<iostream>
// using namespace std;
// int main(){
//     int n , m;
//     cout<<"Enter number of rows :";
//     cin>> n; // number of rows 
//     cout<<"Enter number of column :";
//     cin>>m; // number of columns
//     cout<<"The patterns is :"<<endl;
//     for(int i = 1 ; i <= n ; i++){// for rows
//         for(int j = 1 ; j <= m ; j++){// for columns
//            cout<<j<<" ";
//         }
//         cout<<endl;
//     }
// }

#include<iostream>
using namespace std;
int main(){
    int n , m;
    cout<<"Enter number of rows :";
    cin>> n; // number of rows 
    
    cout<<"The patterns is :"<<endl;
    for(int i = 1 ; i <= n ; i++){// for rows
        for(int j = 1 ; j <= n - i ; j++){// for columns
           cout<<" "<<" ";
        }
        for(int k = 1 ; k <= i ; k++){// for columns
            cout<<"*"<<" ";
    }
    cout<<endl;
}
}