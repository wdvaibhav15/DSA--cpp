#include<iostream>
using namespace std;
 void printEvenNumbers(int n){
    if(n%2 !=0)
    {
        n=n-1;
    }
    
    if(n==2){
        cout<<2<<endl;
        return ;
    }   
    printEvenNumbers(n-2);
    cout<<n<<endl;
   
 }
  int main(){
    int n;
    cout<<"Enter the value of n : ";
    cin>> n;
    printEvenNumbers(n);
  }