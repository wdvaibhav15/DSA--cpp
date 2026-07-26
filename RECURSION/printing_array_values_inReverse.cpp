//------------------------------------------------------//

// arr= [23,34,566,7,8]
// print {8 7 566 34 23}  from index 0 to 4 

// #include<iostream>
// using namespace std;
// int printArray(int arr[],int index, int n){
//     if(index == n){
//         return 0;
//     }
//     else{
//         printArray(arr,index+1, n);
//         cout<<arr[index]<<" ";
        
//     }
// }
// int main(){
//     int n;
//     cout<<"Enter the no of elements: ";
//     cin>>n;
//     int arr[n];
//     cout<<"Enter the elements: "<<endl;
//     for(int i = 0 ; i<n; i++){
//         cin>>arr[i];
//     }
//     cout<<"Printing the elements of an Array using recursion: ";
//     printArray(arr, 0, n);
    
// }



//-------------------------------------------------//
// arr={23,34,566,7,8}
// printing from last to first index= 4 to 0

// #include<iostream>
// using namespace std;
// int printArray(int arr[],int index){
//     if(index == 0){
//         return 0;
//     }
//     else{
        
//         cout<<arr[index-1]<<" ";
//         printArray(arr,index-1);
        
//     }
// }
// int main(){
//     int n;
//     cout<<"Enter the no of elements: ";
//     cin>>n;
//     int arr[n];
//     cout<<"Enter the elements: "<<endl;
//     for(int i = 0 ; i<n; i++){
//         cin>>arr[i];
//     }
//     cout<<"Printing the elements of an Array using recursion: ";
//     printArray(arr,n);
    
// }


//-------------------------------------------//
// printing in currect order but using the last index to first index 
// arr= [23,34,566,7,8]
// print {23,34,566,7,8}  from index 4 to 0

#include<iostream>
using namespace std;
int printArray(int arr[],int index){
    if(index == 0){
        return 0;
    }
    else{
        printArray(arr,index-1);
        cout<<arr[index-1]<<" ";
        
    }
}
int main(){
    int n;
    cout<<"Enter the no of elements: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements: "<<endl;
    for(int i = 0 ; i<n; i++){
        cin>>arr[i];
    }
    cout<<"Printing the elements of an Array using recursion: ";
    printArray(arr,n);
    
}