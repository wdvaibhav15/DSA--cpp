#include<iostream>
#include<vector>
#include<algorithm>
#include<math.h>
using namespace std;

//function of sum of subarray
 int max_subarray(vector<int> arr){
    int prefix = 0;
    int maxi =INT16_MIN;
    int n = arr.size();
    for(int i = 0 ; i<n;i++)
    {
        
            prefix += arr[i];
            maxi = max(maxi , prefix);
             if(prefix<0){
                prefix= 0;
            }
        
    }
    return maxi;
 }
int main(){
    int n ;
    cout<<"Enter the sizs of array:";
    cin>>n;
    vector<int>arr(n);
    cout<<"Enter the elements in array:";
    for(int i = 0; i< n; i++)
    {
        cin>>arr[i];
    }
    cout<<"maximux sum"<<max_subarray(arr);
     
}