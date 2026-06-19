#include<iostream>
using namespace std ;
int main(){
    int n ;
    cout<<"Enter the number of elements: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elemenst of aray :"<<endl;
    for(int i = 0; i <n; i++){
        cin>>arr[i];
    }
    cout<<endl<<"the array :";
    for(int i = 0; i <n; i++){
        cout<<arr[i];
    }
     cout<<endl<<"rotation of array :";
     int temp = arr[n-1];
     for (int i = n-2;i>=0;i--){
        arr[i+1]=arr[i];
     }
     arr[0]= temp;
      
     cout<<endl<<"the array :";
    for(int i = 0; i <n; i++){
        cout<<arr[i];

}}

// #include<iostream>
// using namespace std ;
// int main(){
//     int n ;
//     cout<<"Enter the number of elements: ";
//     cin>>n;
//     int arr[n];
//     cout<<"Enter the elemenst of aray :"<<endl;
//     for(int i = 0; i <n; i++){
//         cin>>arr[i];
//     }
//     cout<<endl<<"the array :";
//     for(int i = 0; i <n; i++){
//         cout<<arr[i];
//     }
//     int temp = arr[n-1];
//     for(int i=n-2; i>=0 ;i--){
//         arr[i+1]=arr[i];
//     }
//     arr[0]=temp;
//     cout<<" the elemenst of aray :"<<endl;
//     for(int i = 0; i <n; i++){
//         cout<<arr[i];
//     }
// }