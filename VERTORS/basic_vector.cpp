#include<iostream>
#include<vector>
using namespace std ;
 int main(){
    // creating a vector
    vector<int>v;
    v.push_back(3);
    v.push_back(9);
    v.push_back(37);
    v.push_back(6);
    v.push_back(5);

    //size of vector
cout<<"size of vector : "<<v.size()<<endl; 
cout<<"capacity of vector : "<<v.capacity()<<endl; 
     vector<int> arr;
     arr.push_back(4);
     arr.push_back(47);
     arr.push_back(54);
     arr.push_back(48);
     arr.push_back(34);
     // printing for thr fisrt element
     cout<<arr[0]<<endl;
     cout<<arr.front()<<endl;
      // printing for thr last element
     cout<<arr[arr.size()-1]<<endl;
     cout<<arr.back()<<endl;
     // sorting 
      vector<int>arr1;
     arr1.push_back(4);
     arr1.push_back(47);
     arr1.push_back(54);
     arr1.push_back(48);
     arr1.push_back(34);
     // sorting in increasing order
     //sort(arr1.begin(), arr1.end());
     for(int i = 0 ; i<arr1.size(); i++)
     {
        cout<<arr1[i]<<" ";
     }
     // sorting in decreasing order
     //sort(arr1.begin(), arr1.end(), greater<int>());
     for(int i = 0 ; i<arr1.size(); i++)
     {
        cout<<arr1[i]<<" ";
    }
    // binary searching( return a boolean value 0 or 1 )
    //cout<<binary_search(arr1.begin(),arr1.end(),34);
    

}