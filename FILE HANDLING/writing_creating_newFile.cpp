#include<iostream>
#include<fstream>
using namespace std;
int main(){
    // open the file
    ofstream fout;// object
    fout.open("Zoom.txt"); // open the with path if file is not exists it will create new file
    // write in the file
    fout<<"Hello, this is a new demo file";
    // close the file
    fout.close();// release the memory/resource
}