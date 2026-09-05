#include <iostream>
#include <vector>
#include <climits>
#include <algorithm>

using namespace std;

class Solution {
public:
    int minDist(vector<int>& arr, int x, int y) {

        int last = -1;
        int ans = INT_MAX;

        for (int i = 0; i < arr.size(); i++) {

            if (arr[i] == x || arr[i] == y) {

                if (last != -1 && arr[i] != arr[last]) {
                    ans = min(ans, i - last);
                }

                last = i;
            }
        }

        if (ans == INT_MAX)
            return -1;

        return ans;
    }
};

int main() {

    Solution obj;

    
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    int arr[n];
    vector<int> vec(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++) {
        vec[i] = arr[i];
    }
    int x ;
    cout << "Enter the first element: ";
    cin >> x;

    int y ;
    cout << "Enter the second element: ";
    cin >> y;

    int result = obj.minDist(vec, x, y);

    cout << "Minimum Distance: " << result << endl;

    return 0;
}