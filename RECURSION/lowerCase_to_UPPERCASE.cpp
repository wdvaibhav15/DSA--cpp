#include<iostream>
using namespace std;
string upperCase(string str, int i, int j){ 
     if(i==j+1){
        return str;
     }
     str[i]=toupper(str[i]);
     return upperCase(str, i+1, j);
}
int main(){
    string str;
    cout<<"Enter the string: ";
    cin>>str;
    cout<<"The upperCase of this "<<str<<" is : "<<upperCase(str, 0, str.length()-1);
}
