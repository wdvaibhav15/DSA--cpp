#include <iostream>
#include <vector>
#include <stack>
using namespace std;

int removeConsecutiveSame(vector<string>& arr) {
    stack<string> s;

    for (int i = 0; i < arr.size(); i++) {
        if (s.empty()) {
            s.push(arr[i]);
        }
        else if (s.top() == arr[i]) {
            s.pop();
        }
        else {
            s.push(arr[i]);
        }
    }

    return s.size();
}

int main() {
    int n;

    cout << "Enter number of strings: ";
    cin >> n;

    vector<string> arr(n);

    cout << "Enter the strings:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int result = removeConsecutiveSame(arr);

    cout << "Number of strings left after removal: "
         << result << endl;

    return 0;
}