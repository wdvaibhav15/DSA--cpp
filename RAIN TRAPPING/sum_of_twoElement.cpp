#include<iostream>
#include<vector>
using namespace std;
bool sum_oftwoElements(vector<int>arr , int n , int target)
{
    //3,4,6,7,8,,5,3,2,
    int start = 0 , end = n-1;
     
        while(start<end)
        {
             for(int i = 0 ; i <n-1 ; i++)
             {
            if(arr[start] + arr[end]== target)
                return 1;
            else if(arr[start] + arr[end] > target)
                end --;
            else
            start++;   
            }
        }    
    return 0;
}
int main(){

 int n ;
 cout<<"Enter the size of array:";
 cin>>n;
 vector<int>arr(n);
 for(int i = 0 ; i < n ; i++){
    cin>>arr[i];
 }
 int target;
 cout<<"enter the target element:";
 cin >>target;
 cout<<sum_oftwoElements(arr,n ,target);

}
