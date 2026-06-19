#include<iostream>
#include<vector>
#include<algorithm>
using namespace std ;

int divide(vector<int>arr){
    int totalSum = 0;
    int prefix = 0;
    int n = arr.size();

     for(int i = 0 ;i<n ;i++)
     {
        totalSum = totalSum + arr[i];
     }
    for (int i = 0 ; i<n; i++)
     {
      prefix += arr[i];
      int suffix = totalSum - prefix;
        
      if(suffix == prefix)
        return i;
     }
    return 0;
}


int main(){
    // divided in to two subarray
    int n;
    cout<<"Enter the size of array:";
    cin>>n;
     vector<int>arr(n);
     cout<<"Enter the elements of array:";
     for(int i = 0 ; i <n; i++){
        cin>> arr[i];
     }
      cout<<"ans"<<divide(arr);

}