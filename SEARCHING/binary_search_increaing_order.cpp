#include<iostream>
using namespace std ;
int binary_search(int arr[], int n , int key){
      int  START = 0 ;
      int END = n-1;
      int MID;
      
      while(START<= END)
      {
        MID =  (START+END)/2;
        if(arr[MID] == key){
          return MID;
        }
        else if(arr[MID]>key){
           
            END= MID -1 ;
        }
        else{
            START= MID+1;
            
        }
      }
      return -1;

}
int main(){
    int n ;
    cout<<"Enter the no of elements in array:";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of array in increasing order only:"<<endl;
    for (int i = 0 ; i<n; i++){
        cin>>arr[i];
    }
    cout<<"the entered elements of array:";
    for (int i = 0 ; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    int key;
    cout<<"Enter the key you want to find in the array:";
    cin>>key;
     cout<<binary_search( arr,n, key);
    return 0;
}