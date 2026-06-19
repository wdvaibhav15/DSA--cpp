#include<iostream>
using namespace std;
int main(){
    int *ptr = new int;
    *ptr = 5;
    cout<< ptr << endl;
    cout<< *ptr << endl;
    
     float *flt = new float(3.14);
    cout<< flt << endl;
    cout<< *flt << endl;

    delete ptr; // free the allocated memory
    delete flt; // free the allocated memory
}