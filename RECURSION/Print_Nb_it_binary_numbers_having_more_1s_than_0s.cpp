#include <iostream>
#include <vector>
#include <string>
using namespace std;

void generateBinary( int N, vector<string>& ans, string& temp, int zero, int one) {
    // Base case
    if (temp.size() == N) {
        ans.push_back(temp);
        return;
    }

    // Add 1
    temp.push_back('1');
    generateBinary(N, ans, temp, zero, one + 1);
    temp.pop_back();

    // Add 0 only when number of 1s is greater than number of 0s
    if (zero < one) {
        temp.push_back('0');
        generateBinary(N, ans, temp, zero + 1, one);
        temp.pop_back();
    }
}

int main() {
    int N;

    cout << "Enter the number of bits: ";
    cin >> N;

    if (N <= 0) {
        cout << "Number of bits must be greater than 0.";
        return 0;
    }

    vector<string> ans;
    string temp;

    generateBinary(N, ans, temp, 0, 0);

    cout << "Binary numbers are:\n";

    for (const string& binary : ans) {
        cout << binary << endl;
    }

    return 0;
}