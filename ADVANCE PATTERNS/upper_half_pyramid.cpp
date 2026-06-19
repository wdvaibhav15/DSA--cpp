
#include<iostream>
using namespace std ;
int main(){
    int n ;
    cout<<"Enter the number of rows :";
    cin>>n;
    // pattern
    cout<<"Pattern half pyramid :"<<endl;
    //             * 
    //          *  *  * 
    //       *  *  *  *  * 
    //    *  *  *  *  *  *  * 
    // *  *  *  *  *  *  *  *  *
    for(int i = 1 ; i <= n; i++){
        // for(int j = 1 ; j <= (n); j++){
            for(int k = 1; k <= (n - i); k++){
                cout<<"   ";
            }
            for(int m = 1; m <= (2*i - 1); m++){
                cout<<" * ";
            }
        cout<<endl;
    }

    for(int i = 1 ; i <= n; i++){
        // for(int j = 1 ; j <= (n); j++){
            for(int k = 1; k <= (n - i); k++){
                cout<<"   ";
            }
            for(int m = 1; m <= (2*i - 1); m++){
                cout<<" "<<i <<" ";
            }
        cout<<endl;
    }


}