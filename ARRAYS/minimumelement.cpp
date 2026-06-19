#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of elements in array :";
    cin>>n;
    int arr[n];
    cout<<" enter the emenets of array: ";
    for (int i = 0 ; i <n ; i++){
        cin>>arr[i];
        
    }
    // int arr[7]= { 20000,56,778,59876,33,22,10};
    
    int min = INT16_MAX;
    for(int i= 0; i<n ; i++){
        if (arr[i]<min){
            min=arr[i];
        }
    }
    cout<<"the minimum element is "<<min;
}