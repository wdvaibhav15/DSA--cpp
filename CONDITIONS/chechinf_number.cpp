#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter your lucky number :";
    cin>>num;
    if(num==0){
        cout<<num<<" : is zero ";
    }
    else if(num>0){
        cout<<num<<": is positive";
    }
    else{
        cout<<num<< " : is negative";
    }
}