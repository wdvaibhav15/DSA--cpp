#include<iostream>
using namespace std;
int pelindrome(string str,int i,int j){
    if(i>j){
        return 1;
    }
    if(str[i]==str[j]){
        return pelindrome(str,i+1,j-1);
    }
    return 0;
}
int main(){
    string str;
    cout<<"Enter the string : ";
    cin>>str;
    if(pelindrome(str , 0, str.length()-1) == 1){
        cout<<str<<" is a pelindrome";
    }
    else{
        cout<< str<<" is not a pelindrome";
    }
}