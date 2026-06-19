#include<iostream>
using namespace std ;
int main(){
    int n;
    cout<<"Enter the size of array:";
    cin>>n;
    int arr[n];
   cout<<"Enter the elements of array:";
    for(int i = 0 ; i<n ; i ++){
        cin>>arr[i];
    }
    cout<<"the elements of array:";
    for(int i = 0 ; i<n ; i ++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    int prefix[n];
    prefix[0]= arr[0];
    for(int i = 1; i<n ; i++)
    {
        prefix[i]=  prefix[i-1] + arr[i] ;
    }

    cout<<"the elements of prefix:";
    for(int i = 0 ; i<n ; i ++)
    {
        cout<<prefix[i]<<" ";
    }
    return 0;
}