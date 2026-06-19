#include<iostream>
using namespace std;

int fact(int n){
    if (n == 1 ){
        return 1;
    }
    else if (n==0){
       return 1 ;
    }
    else{
        return n*fact(n-1);
    }
    
}


int main(){
     int n ;
      cout<<"Enter a positive integer: ";
      cin>>n;   
       if (n<0){
        cout<<"Please enter a positive number..!!";
        return 0;
       }
      cout<< "factorial of "<<n<<" is : "<<fact(n);

}