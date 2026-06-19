#include<iostream>
using namespace std;
int main(){
    int n ;
    cout<<"Enter the number : ";
    cin>>n;
    cout<<"Sum of square of the number upto n :"<<endl;
    int sum = 0;
    for (int i = 1 ; i<=n ; i++){
        sum = sum+i*i;
    }
    cout <<"Square of number upto "<< n<< " is :"<<sum;
}