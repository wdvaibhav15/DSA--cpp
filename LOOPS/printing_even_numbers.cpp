#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter the number :";
    cin>>num;
    int count = 0;
    for(int i = 1; i <=num ; i++){
        if(i %2 == 0){
            cout<<i<<endl;
            count++;
        }
        
        
    }
    cout<<count;
}