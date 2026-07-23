#include<iostream>
using namespace std;
int main(){
    // heap allocation for variable
    int *ptr = new int;

    // heap value assignment 
    *ptr = 10;

    // printing the value
    cout<<"The int value is : "<<*ptr<<endl;

    // heap allocation for float
    float *flt = new float;

    // value assignment
    *flt = 3.14;

    // printing the value
    cout<<"The float value is :"<<*flt<<endl;

    // heap allocation for string
    string *str = new string;

    // value assignment
    *str = "memory management";

    //printing the value
    cout<<"The string value is :"<<*str<<endl;

    // array allocation 
    int *arr = new int[5];

    //value assignment
    cout<<"Enter the values of array :"<<endl;
     for (int n=0; n<5; n++){
        cin>>arr[n];
     }

    // printing the value
    cout<<"The array values are :";
    for (int n=0; n<5; n++){
        cout<<arr[n]<<" ";
     }
     cout<<endl;

     // array allocation using variable number of elements
     int m;
     cout<<"Enter the number of elements in array :";
     cin>>m;
    int *array = new int[m];

    //value assignment
    cout<<"Enter the values of array :"<<endl;
     for (int i=0; i<m; i++){
        cin>>array[i];
     }

    // printing the value
    cout<<"The array values are :";
    for (int i=0; i<m; i++){
        cout<<array[i]<<" ";
     }

     delete ptr;
     delete flt;
     delete str;
     delete []arr;
     delete []array;

}