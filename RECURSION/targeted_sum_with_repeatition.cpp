#include <iostream>
using namespace std;

int targetSum(int arr[], int index, int n, int sum)
{
    if(sum == 0)
        return 1;

    if(index == n || sum < 0)
        return 0;
        return targetSum(arr, index + 1, n, sum) +  targetSum(arr, index, n, sum - arr[index]);
}

int main()
{
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    int arr[n];

    cout << "Enter the elements: ";
    for(int i = 0; i < n; i++)
        cin >> arr[i];

    int sum;
    cout << "Enter the target sum: ";
    cin >> sum;

    cout << "Number of subsets containing sum = " << targetSum(arr, 0, n, sum);
}