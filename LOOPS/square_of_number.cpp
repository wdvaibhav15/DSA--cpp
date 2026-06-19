#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"enter the number :";
    cin>>num;
    cout<<"square of the number : " <<endl;
    for(int i = 1 ; i<= num ; i++){
        cout<<"square of  "<<i<<" is : "<<i*i<<endl;
    }
}