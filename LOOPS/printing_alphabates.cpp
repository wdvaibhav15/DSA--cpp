#include<iostream>
using namespace std;
int main(){
    char n = (char)65;
    cout<<"Printing alphabates in lower case :"<<endl;
    for(int i = n ; i<= n + 25 ;i++){
        cout<<(char)i<<endl;
    }

    cout<<"Printing alphabates in upper case :"<<endl;
    char m = (char)97;
    
    for(int i = m ; i<= m + 25 ;i++){
        cout<<(char)i<<endl;
    }
}