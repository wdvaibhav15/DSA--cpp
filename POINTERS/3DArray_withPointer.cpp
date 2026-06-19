#include<iostream>
using namespace std;
int main(){
    // // creating a 2D array using pointers
    // int rows;   
    // int cols;
    // cout<<"Enter number of rows : ";
    // cin>> rows;
    // cout<<"Enter number of columns : ";
    // cin>> cols;
    // int **ptr = new int *[rows];
    // // creating 2 d array with the help of pointer 
    //  for (int i = 0; i < rows; i++) {
    //     ptr[i] = new int[cols];
    // }
    //  // filling the values  in the 2d array
    // for (int i = 0; i < rows; i++) {
    //     for (int j = 0; j < cols; j++) {
    //         cin>> ptr[i][j];
    //     }
    // }
    // cout<< " the entered elemenst are:"<<endl;
    // // printing the entered values
    // for (int i = 0; i < rows; i++) {
    //     for (int j = 0; j < cols; j++) {
    //         cout<< ptr[i][j]<<" ";
    //     }
    //     cout<< endl;
        
    // }
    //  // deallocating the memory
    // for (int i = 0; i < rows; i++) {
    //     delete[] ptr[i];
    // }
    //  delete[] ptr;
    // return 0;  

    // creating a 3 d array using pointer 
    int x,y,z;
    cout<<"Enter the value of x ";
    cin>> x;
    cout<<"Enter the value of y ";
    cin>> y;
    cout<<"Enter the value of z ";
    cin>> z;
    int ***ptr = new int **[x];
    for (int i = 0; i < x; i++) 
    {
        ptr[i] = new int *[y];
        for (int j = 0; j < y; j++)
         {
            ptr[i][j] = new int [z];
        }
    }
}