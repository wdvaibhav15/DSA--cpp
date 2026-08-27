#include<iostream>
#include<stack>
using namespace std;
int main(){
    int n;
    cout<<"Enter the no of elements in array : ";
    cin>>n;

    string arr[n];
    cout<<"Enter the elements of array : "<<endl;
    for(int i = 0 ; i < n ; i++){
        cin>>arr[i];
    }


    stack<string> s;

    for(int i = 0 ; i < n ; i++){
        s.push(arr[i]);
    }

    for(int i = 0 ; i < n ; i++){
        arr[i] = s.top();
        s.pop();
    }
    cout<<"The reversed array is : "<<endl;
    for(int i = 0 ; i < n ; i++){
        cout<<arr[i]<<" ";
    }
}