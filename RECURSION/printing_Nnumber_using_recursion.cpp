#include<iostream>
using namespace std;
 void printNnumber(int n){
    if(n==1){
        cout<<1<<endl;
        return ;
    }
    printNnumber(n-1);
        cout<<n<<endl;
  
 }
int main(){
    // printing N numbers using recursion
    int n;
    cout<<"Enter the value of n : ";
    cin>> n;
    printNnumber(n);
} 
