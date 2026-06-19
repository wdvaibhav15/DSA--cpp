#include<iostream>
using namespace std;
int main(){
     int n;
    cout<<"Enter the no of elements:";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements:"<<endl;
    for(int i = 0 ; i<n; i++){
        cin>>arr[i];
    }
     for(int i = 0 ; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl<<"the largest element is :";
    int max= INT16_MIN;
    for(int i =0 ; i <n; i++){
        if(arr[i]>max){
            max= arr[i];
        }
    }
     cout<<max;
      cout<<endl<<"second largest is :";
      int secondlargest=INT16_MIN;
      for(int i =0 ;i <n ;i++){
        if(max!= arr[i]){
       
        if(secondlargest>arr[i]){
            secondlargest= secondlargest;
        }
        else{
            secondlargest= arr[i];
        }
        }
      }
      cout<<secondlargest;
    
}
