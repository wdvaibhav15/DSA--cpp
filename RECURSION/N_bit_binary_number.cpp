#include <iostream>
#include <vector>
using namespace std;

void generateBinary(vector<int> &arr, int n, int index) {
    vector<int> arr(n);
    // Base case
    if (index == n) {
        for (int i = 0; i < n; i++) {
            cout << arr[i];
        }
        cout << endl;
        return;
    }

    // Put 0
    arr[index] = 0;
    generateBinary(arr, n, index + 1);

    // Put 1
    arr[index] = 1;
    generateBinary(arr, n, index + 1);
}

int main() {
    int n;
    cout << "Enter the number of bits: ";
    cin >> n;

    vector<int> arr(n);

    cout << "Binary numbers are:\n";
    generateBinary(arr, n, 0);

    return 0;
}