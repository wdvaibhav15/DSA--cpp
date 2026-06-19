#include<iostream>
#include<vector>
using namespace std;
bool sum_of_three(vector<int>arr , int n,int target ){
    // 2,4,7,4,9,3
    for(int i = 0; i<n-2 ; i++)
    {
        int start =i +1 , end = n-1 ,sum =target-arr[i]   ;
        while(start<end)
        {
            if( arr[i]+ start+ end == sum)
                return 1;
            else if(arr[i]+ start+ end> sum)
                 end--;
              else
                start++;  

        }


    }
    return 0;
}
 int main(){
    int n ;
     cout<<"Enter the size of array: ";
     cin>>n;
     vector<int>arr(n);
     cout<<"Enter the elements of the vector: ";
     for(int i = 0 ; i<n;i++){
        cin>>arr[i];
     }
     int target ;
     cout<<"enter the sum of three number: target: ";
     cin>>target;
     cout<< sum_of_three(arr,n,target);

 }