//-------------using for loop----------------------//


// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     cout<<"Enter the numbe of elements of the array :";
//     cin>>n;
//     int arr[n];
//     cout<<"Enter the elements of array: "<<endl;
//     for(int i = 0 ; i<n; i++){
//         cin>>arr[i];
//     }
//     int key;
//     cout<<"Enter the key you want to find in the array :";
//     cin>>key;
//     for(int i = 0; i < n-1; i++){
//         if(arr[i] == key){
//             cout<<"The index of key is :"<<i;
//         }
//     }
// }



//------------------using recurion-------------------------//



#include<iostream>
using namespace std;
int linearSearch(int arr[], int index, int n, int key){
    if(index == n){
        return -1;
    }else{
        if(arr[index] == key){
            return index;
        }else{
            return linearSearch(arr, index+1, n, key);
        }
    }
}
int main(){
    int n;
    cout<<"Enter the numbe of elements of the array :";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of array: "<<endl;
    for(int i = 0 ; i<n; i++){
        cin>>arr[i];
    }
    int key;
    cout<<"Enter the key you want to find in the array :";
    cin>>key;
    cout<<"The index of key is :"<<linearSearch(arr, 0, n, key);
}


//-------------using recursion but less no of parameteds------------//


// #include<iostream>
// using namespace std;
// int linearSearch(int arr[], int index, int key){
//     if(arr[index] == key){
//         return 1;
//     }else{
//         return linearSearch(arr, index+1, key);
//     }
//     return 0;
// }
// int main(){
//     int n;
//     cout<<"Enter the numbe of elements of the array :";
//     cin>>n;
//     int arr[n];
//     cout<<"Enter the elements of array: "<<endl;
//     for(int i = 0 ; i<n; i++){
//         cin>>arr[i];
//     }
//     int key;
//     cout<<"Enter the key you want to find in the array :";
//     cin>>key;
//     cout<<"The index of key is :"<<linearSearch(arr, 0, key);
// }




