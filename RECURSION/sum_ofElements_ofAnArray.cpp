#include<iostream>
using namespace std;

int sumOfElements(int arr[], int index, int n, int sum){
    if(index == n){
        return sum;
    }
    else{
        sum = sum + arr[index];
        sumOfElements(arr,index+1, n, sum);
    }
}

int main(){
    int n;
    cout<<"Enter the number of elements in array : ";
    cin>>n;

    int arr[n];
    cout<<"Enter the elements of array: "<<endl;
    for(int i = 0 ; i<n; i++){
        cin>>arr[i];
    }

    int sum = 0;
     cout<<"Sum of elements of array is : "<< sumOfElements(arr, 0, n, sum);


}