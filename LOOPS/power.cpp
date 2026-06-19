#include<iostream>
using namespace std;
int main(){
    int n ,m ;
    cout<<"Enter the value of base :";
    cin>>n;
    cout<<"Enter the value of power :";
    cin>>m;
    int power = n;//base n, power m
    for(int i = 1; i < m; i++){
        power = power*n;
    }
    cout<<power;
}