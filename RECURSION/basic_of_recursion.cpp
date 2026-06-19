#include<iostream>
using namespace std;
 void birthday(int n){
    if(n>0){
    cout<<n<<" days left for birthday"<<endl;
    return birthday(n-1);
    }
    else{
        cout<<"Happy Birthday!!!"<<endl;
    }

 }    
int main(){
    // basic of recursion
     int n ;
     cout<<"inter the value of n  :";
     cin>>n;
     birthday(n);


    return 0;
}