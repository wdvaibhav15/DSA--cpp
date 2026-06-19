#include<iostream>
using namespace std ;
int main(){
    int n;
    cout<<"Enter the size of array:";
    cin>>n;
    int arr[n];
   cout<<"Enter the elements of array:";
    for(int i = 0 ; i<n ; i ++){
        cin>>arr[i];
    }
    cout<<"the elements of array:";
    for(int i = 0 ; i<n ; i ++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    int suffix[n];
    suffix[n-1]= arr[n-1];
    for(int i = n-2; i>=0 ; i--)
    {
        suffix[i]=  suffix[i+1] + arr[i] ;
    }

    cout<<"the elements of prefix:";
    for(int i = 0 ; i<n ; i ++)
    {
        cout<<suffix[i]<<" ";
    }
    return 0;
}

#include <iostream>
#include <vector>
using namespace std;
//---------------------------------<*>--------------------------------

int main() {
    int n;
    cout << "Enter size of vector: ";
    cin >> n;

    vector<int> arr(n), suffix(n);

    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    suffix[n - 1] = arr[n - 1];

    for (int i = n - 2; i >= 0; i--) {
        suffix[i] = arr[i] + suffix[i + 1];
    }

    cout << "Suffix Sum Vector: ";
    for (int val : suffix) {
        cout << val << " ";
    }
    cout << endl;

    return 0;
}
