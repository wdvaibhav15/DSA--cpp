#include<iostream>
using namespace std ;
 int power (int base , int exponent){
     if (exponent ==0){
        return 1 ;
     }
     else if (exponent ==1){
        return base ;
     }
     else
     return ( base * power(base , exponent-1));
 }
 int main(){
     int base , exponent ;
      cout<<"Enter base value : ";
      cin>> base;
      cout<<"Enter exponent value : ";
      cin>> exponent;
       cout<<base << " rest to the power "<<exponent <<"  is : " <<power(base , exponent);
      
 }