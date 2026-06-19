#include<iostream>
using namespace std;
int main(){
    char ch;
    cout<<"Enter your character :";
    cin>> ch;   
     if(ch == 'a'|| ch == 'i'|| ch == 'e' || ch == 'o'|| ch == 'u' ||ch == 'A' || ch == 'E'|| ch == 'I'|| ch == 'O'||ch == 'u'){
        cout<<ch<<" : is vowel";
     }
     else
     cout<<ch<<" : is consonent";

}