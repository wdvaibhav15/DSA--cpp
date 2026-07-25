#include<iostream>
using namespace std;
int nstair(int n){
    if(n<1){
        return 1;
    }else if(n==1){
        return 1;
    }else if(n==2){
        return 2;
    }else{
        return nstair(n-1)+nstair(n-2);
    }
}
int main(){
    int n;
    cout<<"Enter the number of stairs : ";
    cin>>n;
    cout<<"Steps needs to reach the "<< n<<"th stair are :"<<nstair(n);

}