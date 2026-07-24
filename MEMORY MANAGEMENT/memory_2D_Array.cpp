#include<iostream>
using namespace std;
 int main(){
    // creating an array which contains addressess of the another array
    // number of rows and columns
    int r,c;
    cout<<"inter the number of rows : "; 
    cin>>r;
    cout<<"inter the number of columns : "; 
    cin>>c;

    // number of rows of addressess
    int **ptr  = new int *[r];
    
    //created 2-D array
    for(int i = 0 ; i < r ; i++){
        ptr[i] = new int[c];
    }

    //values for the 2-D array
    cout<<"Enter the elements of the 2-D array :"<<endl;
    for(int i = 0 ; i < r ; i++){
        for(int j = 0 ; j < c ; j++){
            cin>>ptr[i][j];
        }
    }
    // print the 2-D array
    cout<<"2-D Array :"<<endl;
    for(int i = 0 ; i < r ; i++){
        for(int j = 0 ; j < c ; j++){
            cout<<ptr[i][j]<<" ";
        }
        cout<<endl;
    }

    // release the memory
    for(int i = 0 ; i < r ; i++){
        delete [] ptr[i];
    }
    delete [] ptr;
 }