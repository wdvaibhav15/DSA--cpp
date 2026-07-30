//---------for positive elements only----------//

// #include<iostream>
// using namespace std;

// int perfectSum(int arr[], int n, int index, int sum){
    
//     if(sum == 0){
//         return 1;
//     }
//     if(index == n || sum < 0){
//         return 0;
//     }

//     return  perfectSum(arr,n,index+1,sum) + perfectSum(arr,n,index+1,sum-arr[index]);
    
// }
// int main(){
//     int n;
//     cout<<"Enter the number : ";
//     cin>>n;
//     int arr[n];
//     cout<<"Enter the elements of the array : ";
//     for(int i =0 ; i<n ; i++){
//         cin>>arr[i];
//     }
//     int sum;
//     cout<<"Enter the required sum : ";
//     cin>>sum;
//     cout<<perfectSum(arr,n,0,sum);
// }

//-------------------------included 0 -------------//


// #include<iostream>
// using namespace std;

// int perfectSum(int arr[], int n, int index, int sum){
//     if(index == n){
//         if(sum == 0){
//             return 1;
//         }else{
//             return 0;
//         }
//     }else{
//         return  perfectSum(arr,n,index+1,sum) + perfectSum(arr,n,index+1,sum-arr[index]);
//     }
// }
// int main(){
//     int n;
//     cout<<"Enter the number : ";
//     cin>>n;
//     int arr[n];
//     cout<<"Enter the elements of the array : ";
//     for(int i =0 ; i<n ; i++){
//         cin>>arr[i];
//     }
//     int sum;
//     cout<<"Enter the required sum : ";
//     cin>>sum;
//     cout<<perfectSum(arr,n,0,sum);
// }

//-----------negative elements also----------//
#include<iostream>
using namespace std;

int perfectSum(int arr[], int n, int index, int sum){
    if(index == n){
        if(sum == 0){
            return 1;
        }else{
            return 0;
        }
    }else{
        return  perfectSum(arr,n,index+1,sum) + perfectSum(arr,n,index+1,sum-arr[index]);
    }
}
int main(){
    int n;
    cout<<"Enter the number : ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of the array : ";
    for(int i =0 ; i<n ; i++){
        cin>>arr[i];
    }
    int sum;
    cout<<"Enter the required sum : ";
    cin>>sum;
    cout<<perfectSum(arr,n,0,sum);
}