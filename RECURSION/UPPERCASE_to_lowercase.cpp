#include<iostream>
using namespace std;
string lowerCase(string str, int i, int j){ 
     if(i==j+1){
        return str;
     }
     str[i]=tolower(str[i]);
     return lowerCase(str, i+1, j);
}
int main(){
    string str;
    cout<<"Enter the string: ";
    cin>>str;
    cout<<"The lowerCase of this "<<str<<" is : "<<lowerCase(str, 0, str.length()-1);
}
