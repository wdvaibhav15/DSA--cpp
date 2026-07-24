#include<iostream>
using namespace std;
int main(){
    int l, b, h;
    cout<<"Enter the length : ";
    cin>>l;
    cout<<"Enter the breadth : ";
    cin>>b;
    cout<<"Enter the height : ";
    cin>>h;

    // create a 2D array to store addressess of the another array
    int ***ptr = new int **[l];

    // create 2d array to store address of the another array
    for(int i = 0; i < l; i++){
        ptr[i] = new int *[b];
        for(int j = 0; j < b; j++){
            ptr[i][j] = new int[h];
        }
    }

    // filling values in this array
    for(int i = 0; i < l; i++){
        for(int j = 0; j < b; j++){
            for(int k = 0; k < h; k++){
                cin>>ptr[i][j][k];
            }
        }
    }

    // printing the values
    for(int i = 0 ; i<l ;i++){
        for(int j = 0 ; j<b ;j++){
            for(int k = 0 ; k<h ;k++){
                cout<<ptr[i][j][k]<<" ";
            }
            cout<<endl;
        }
    }

    // releases the memory
    for(int i = 0; i < l; i++){
        for(int j = 0; j < b; j++){
            delete [] ptr[i][j];
        }
        delete [] ptr[i];
    }
    delete [] ptr;
    
}
