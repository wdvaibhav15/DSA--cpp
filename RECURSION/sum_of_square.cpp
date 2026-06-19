#include<iostream>
using namespace std;
 int sumOfSquares(int n){
     if (n==1){
        return 1 ;
     }
     
    return ( n*n + sumOfSquares(n-1));
 }  
  int main(){
    int n ;
     cout<<"Enter the value of n : ";
     cin>> n ;
      
        cout<<"Sum of squares of first "<<n<<" natural number is :"<<sumOfSquares(n);   
  }