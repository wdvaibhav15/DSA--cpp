#include<iostream>
#include<vector>
using namespace std;

int targetSum(vector<int>&arr , int n , int target){
    if(target == 0)
    return 1;
    if(target < 0)
    return 0;

    int sum =0 ;
    for(int i = 0 ; i < n ; i++){
        sum+= targetSum(arr , n , target-arr[i]);
    }
    return sum;
}
int main(){
    int n;
    cout<<"Enter the number of elements : ";
    cin>>n;
    vector<int>arr(n);
    cout<<"Enter the elements : ";
    for(int i = 0 ; i < n ; i++){
        cin>>arr[i];
    }
    int target;
    cout<<"Enter the target sum : ";
    cin>>target;
   cout<<"Number of subsets containing sum "<<target<<" is : " <<targetSum(arr , n , target);

    
}