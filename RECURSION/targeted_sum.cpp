#include <iostream>
#include <vector>
using namespace std;

void subSequence( int arr[],  int index,int n, vector<int> temp, vector<vector<int>>& ans) {
    if (index == n) {
        ans.push_back(temp);
        return;
    }

    // Element not included
    subSequence(arr, index + 1, n, temp, ans);

    // Element included
    temp.push_back(arr[index]);
    subSequence(arr, index + 1, n, temp, ans);
}

int main() {
    int n;

    cout << "Enter the number of elements: ";
    cin >> n;

    vector<int> arr(n);

    cout << "Enter the elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int target;
    cout << "Enter the target sum: ";
    cin >> target;

    vector<vector<int>> ans;
    vector<int> temp;

    subSequence(arr.data(), 0, n, temp, ans);

    cout << "\nThe subsequences and their sums are:\n";

    for (int i = 0; i < ans.size(); i++) {
        int sum = 0; // Reset sum for every subset
        

        cout << "{ ";

        for (int j = 0; j < ans[i].size(); j++) {
            cout << ans[i][j] << " ";
            sum += ans[i][j];
        }
        cout << "}";

        cout << "  Subset sum is: " << sum << endl;
        if(sum == target){
                cout << "Target sum found!" << endl;
            }
    }

    cout << "\nThe total number of subsequences is: "
         << ans.size() << endl;

    return 0;
}