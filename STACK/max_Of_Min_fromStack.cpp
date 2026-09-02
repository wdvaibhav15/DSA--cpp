#include <iostream>
#include <vector>
#include <climits>
#include <algorithm>
using namespace std;

vector<int> maxOfMins(vector<int>& arr) {

    int n = arr.size();
    vector<int> ans(n, 0);

    // i = window size - 1
    for (int i = 0; i < n; i++) {

        // j = starting index of window
        for (int j = 0; j < n - i; j++) {

            int num = INT_MAX;

            // Find minimum in current window
            for (int k = j; k < j + i + 1; k++) {
                num = min(num, arr[k]);
            }

            // Maximum of all minimums
            ans[i] = max(ans[i], num);
        }
    }

    return ans;
}

int main() {

    vector<int> arr = {10, 20, 30, 50, 10, 70, 30};

    vector<int> ans = maxOfMins(arr);

    cout << "Answer: ";

    for (int x : ans) {
        cout << x << " ";
    }

    cout << endl;

    return 0;
}