#include<iostream>
using namespace  std;
int main(){
    int num ; 
    cout<< " Enter a decinal number :";
    cin>>num;
    int rem , res = 0 , mult = 1;
    while(num > 0){
        //remender
        rem = num %2;
        //quotient
        num = num /2;
        //answer
        res = rem * mult + res;
        //multiplication
        mult = mult * 10;

    }
    cout<<"the binary number :"<<res;
}
