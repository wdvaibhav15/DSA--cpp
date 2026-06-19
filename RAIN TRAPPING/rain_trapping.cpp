// #include<iostream>
// #include<vector>
// using namespace std; 
// int rain_trapping(vector<int>arr )
// {
//     int leftmax = 0,maxelement = arr[0];
//     int rightmax = 0,index = 0;
//     int water,n = arr.size();
//     // maximum elenent
//     for(int i = 1 ; i< n ; i++)
//     {
//         if(arr[0]<arr[i])
//         {
//             maxelement=arr[i];
//             index = i;
//         }
//     }

//     // left maximul
//     for(int i = 0 ; i< index ; i++)
//     {
//         if(leftmax>arr[i])
//         {
//             water = water + leftmax - arr[i];
//         }
//         else
//         {
//             leftmax = arr[i];
//         }
//     }

//     //right maximum
//     for(int i = n-1 ; i>index ; i--)
//     {
//         if(rightmax>arr[i])
//         {
//             water = water + rightmax-arr[i];
//         }
//         else
//         {
//             rightmax = arr[i];
//         }
//     }
//     return water;
// };
    


// int main()
// {
//     int n ;
//     cout<<"ENter thr size of array:";
//     cin>>n;
//     vector<int>arr(n);
//     cout<<"Enter the elements of the array:";
//     for(int i = 0 ; i< n ; i++)
//     {
//         cin>> arr[i];
//     }
//      cout<<rain_trapping(arr)<<endl;

    
// }
#include <iostream>
#include <vector>
using namespace std;

int rain_trapping(vector<int> arr) 
{
    int n = arr.size();
    int leftmax = 0, rightmax = 0;
    int maxelement = arr[0], index = 0;
    int water = 0;

    // Find index of maximum element
    for (int i = 1; i < n; i++)
     {
        if (arr[i] > maxelement) 
        {
            maxelement = arr[i];
            index = i;
        }
    }

    // Left side calculation
    for (int i = 0; i < index; i++) 
    {
        if (arr[i] < leftmax) 
        {
            water += leftmax - arr[i];
        } else
         {
            leftmax = arr[i];
        }
    }

    // Right side calculation
    for (int i = n - 1; i > index; i--)
     {
        if (arr[i] < rightmax)
         {
            water += rightmax - arr[i];
        } else
         {
            rightmax = arr[i];
        }
    }

    return water;
}

int main()
 {
    int n;
    cout << "Enter the size of array: ";
    cin >> n;
    vector<int> arr(n);
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++)
     {
        cin >> arr[i];
    }
    cout << rain_trapping(arr) << endl;
}

