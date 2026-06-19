#include<iostream>
using namespace std ;
int first_occarance(int arr[], int n , int key){
      int  START = 0 ;
      int END = n-1;
      int MID;
      int first = -1;
      
      while(START<= END)
      {
        MID = START+ (END- START)/2;
        if(arr[MID] == key){
          first = MID;
          END= MID-1;

        }
        else if(arr[MID]<key){
           
            START= MID+1;
        }
        else{
            END= MID -1 ;
            
        }
      }
      return first;

}

int last_occarance(int arr[], int n , int key){
      int  START = 0 ;
      int END = n-1;
      int MID;
      int last = -1;
      
      while(START<= END)
      {
        MID =  START+(END- START)/2;
        if(arr[MID] == key){
          last = MID;
          START= MID+1;

        }
        else if(arr[MID]<key){
           
            START= MID+1;
        }
        else{
            END= MID -1 ;
            
        }
      }
      return last;

}
int main(){
    int n ;
    cout<<"Enter the no of elements in array:";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of array in decreasing oder only:"<<endl;
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
     cout<<first_occarance( arr,n, key);
    cout<<",";
     cout<< last_occarance (arr,n, key);
    return 0;
}