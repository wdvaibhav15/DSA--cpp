#include<iostream>
#include<fstream>
using namespace std;
int main(){
    //object of fstream
    fstream file;
    //open file
    file.open("Zoom.txt");
    //read file
    char c;
    //file>>c; for without space
    c = file.get(); // consider space as a character
    while(!file.eof()){
        
        cout<<c;
        c = file.get();
    };
    file.close();
    return 0;
}