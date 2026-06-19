#include<iostream>
using namespace  std;
int main(){
    int num ; 
    cout<< " Enter a binary number :";
    cin>>num;
    int rem , ans = 0 , mult = 1;
    while(num > 0){
        //remender
        rem = num %10;
        //quotient
        num = num /10;
        //answer
        ans = rem * mult + ans;
        //multiplication
        mult = mult * 2;

    }
    cout<<ans<<endl;
}
