#include<iostream>
#include<vector>
using namespace std;

void merge(int arr[], int start, int mid, int end){
    vector<int>temp(end-start+1);
    int left = start;
    int right = mid+1;
    int index = 0;
     while(left <= mid && right <= end)
     {
         if(arr[left] <= arr[right]){
             temp[index] = arr[left];
             left++;
             index++;
         }
         else{
             temp[index] = arr[right];
             right++;
             index++;
         }
     }
     // if elemements in left array remains
     while(left <= mid){
         temp[index] = arr[left];
         left++;
         index++;
     }
     // if elements in right array remains
     while(right <= end){
         temp[index] = arr[right];
         right++;
         index++;
     }
     // now filling in original array
     index = 0;
     while(start <= end){
         arr[start] = temp[index];
         start++;
         index++;
     }
}

void mergeSort(int arr[], int start, int end){
     if(start == end)
     return ;

     int mid = start+(end-start)/2;
     // for left division
     mergeSort(arr, start, mid);
     // for right division
     mergeSort(arr, mid+1, end);
     // for merging
     merge(arr, start, mid, end);
}
int main(){
    int n;
    cout<<"Enter the number of elements in array : ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of array : ";
    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }
    // calling mergesort
    mergeSort(arr, 0, n-1);
    //printing values after sorting
    for(int i = 0; i < n; i++){
        cout<<arr[i]<<" ";
    }
}