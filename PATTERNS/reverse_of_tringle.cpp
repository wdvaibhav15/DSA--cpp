#include<iostream>
using namespace std;
int main(){
    int n,m ;
    cout<<"Enter the number of rows :";
    cin>> n ;
    cout<<"Enter the number of columns :";
    cin>>m;

    // * * * * * 
    // * * * * 
    // * * * 
    // * * 
    // * 
    // for(int i = 1; i<= n ; i++){
    //     for(int j =1; j <= m - i + 1; j++ ){
    //         cout<<"*" <<" ";
    //     }
    //     cout<<endl;
    // }


    // 1 1 1 1 1 
    // 2 2 2 2
    // 3 3 3
    // 4 4
    // 5
    // for(int i = 1; i<= n ; i++){
    //     for(int j =1; j <= m - i + 1; j++ ){
    //         cout<<i <<" ";
    //     }
    //     cout<<endl;
    // }


    // 1 2 3 4 5 
    // 1 2 3 4
    // 1 2 3
    // 1 2
    // 1
    // for(int i = 1; i<= n ; i++){
    //     for(int j =1; j <= m - i + 1; j++ ){
    //         cout<<j <<" ";
    //     }
    //     cout<<endl;
    // }


    // A A A A A 
    // B B B B
    // C C C
    // D D
    // E
    // for(int i = 1; i<= n ; i++){
    //     for(int j =1; j <= m - i + 1; j++ ){
    //         cout<<(char)(i + 64) <<" ";
    //     }
    //     cout<<endl;
    // }

    // A B C D E 
    // A B C D
    // A B C
    // A B
    // A
    // for(int i = 1; i<= n ; i++){
    //     for(int j =1; j <= m - i + 1; j++ ){
    //         cout<<(char)(j + 64) <<" ";
    //     }
    //     cout<<endl;
    // }


    // a b c d e 
    // a b c d 
    // a b c 
    // a b 
    // a 
    // for(int i = 1; i<= n ; i++){
    //     for(int j =1; j <= m - i + 1; j++ ){
    //         cout<<(char)(j + 96) <<" ";
    //     }
    //     cout<<endl;
    // }


    // a a a a a 
    // b b b b 
    // c c c 
    // d d 
    // e 
    // for(int i = 1; i<= n ; i++){
    //     for(int j =1; j <= m - i + 1; j++ ){
    //         cout<<(char)(i + 96) <<" ";
    //     }
    //     cout<<endl;
    // }
}
