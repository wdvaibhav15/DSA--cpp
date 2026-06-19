#include<iostream>
using namespace std;
int main(){
    int n = 10;
    int *p = &n;
    //address of n
    cout<< p<<endl; 
    //value of n
    cout<< *p<<endl;        
    int **q = &p;

    cout<<q<<endl;
    cout<<&p<<endl;
    cout<<*q<<endl;         
    return 0 ;
}