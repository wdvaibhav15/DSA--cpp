// arr[5]= {1,2,3,4,5};
//output arr[5]={2,4,6,8,10};
#include<iostream>
using namespace std;

 void doubled(int *arr){
     *arr = *arr*2;
 }
 int main(){
    int arr[5]={1,2,3,4,5};
    int *ptr = arr;
    for(int i =0 ; i < 5 ; i++){// addresses
        cout<<ptr+i<<endl;
    }
    for(int i =0 ; i < 5 ; i++){// values
        cout<<*(ptr+i)<<" ";
    }
    cout<<endl;
    for(int i =0 ; i < 5 ; i++){// values
        doubled(&arr[i]);
        cout<<arr[i]<<" ";
    }


 }

