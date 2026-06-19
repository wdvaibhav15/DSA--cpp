#include<iostream>
#include<vector>
#include<algorithm>
#include<math.h>
using namespace std;

//function of sum of subarray
 int max_difference(vector<int> arr){
    int n = arr.size();
    int diff , maximum =INT8_MIN;
    for(int i = 0 ; i < n - 1 ;i++)
    //checking all elements one by one 
    {
       for(int j = i+1 ; j < n ; j++) 
       {
        //checking diffrence between all elements to each other
        diff = arr[j] - arr[i];
        maximum = max(maximum , diff);
       }
    }
    return maximum;
   
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
    cout<<"maximux diff:"<<max_difference(arr);
     
}