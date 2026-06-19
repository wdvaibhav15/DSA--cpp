#include<iostream>
#include<vector>
using namespace std ;
void segregate0or1(int arr[], int n)
{

    
      int start = 0;
      int end = 0;
      while(start<end)
      {
        if(arr[start]==0)
        {
            start++;
        }
        else
        {
            if(arr[end]==0)
            {
                swap(arr[start],arr[end]);
                start++;
                end--;
            }
            else
            {
                end--;
            }
        }
      }
}

int main()
{
    int n ;
    cout<<"Enter the size of array : ";
    cin>>n;
     int arr[n];
     cout<<"enter the 0 or 1 in array:"<<endl;
     for(int i = 0 ; i < n ; i++)
     {
        cin>>arr[i];
     }
    
     cout<<"the elements in array:";
     for(int i = 0 ; i < n ; i++)
     {
        cout<<arr[i]<<" ";
     }
    
    
     segregate0or1(arr, n);

}