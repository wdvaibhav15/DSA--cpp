#include <iostream>
#include <vector>
using namespace std;

void subSequence( int arr[], int index, int n, vector<int> temp, vector<vector<int>>& ans) {
    if (index == n) {
        ans.push_back(temp);
        return;
    }

    // element not included
    subSequence(arr, index + 1, n, temp, ans);

    // element included
    temp.push_back(arr[index]);
    subSequence(arr, index + 1, n, temp, ans);
}

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    int arr[n];

    cout << "Enter the elements:"<<endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    vector<vector<int>> ans;
    vector<int> temp;

    subSequence(arr, 0, n, temp, ans);

    cout << "The subsequences are:\n";

    for (int i = 0; i < ans.size(); i++) {
        cout << "{ ";

        for (int j = 0; j < ans[i].size(); j++) {
            cout << ans[i][j] << " ";
        }

        cout << "}\n";
    }

    cout << "The total number of subsequences is: "<< ans.size() << endl;

    return 0;
}