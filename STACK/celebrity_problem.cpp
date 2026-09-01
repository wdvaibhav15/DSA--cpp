#include <iostream>
#include <vector>
using namespace std;

int celebrity(vector<vector<int>>& mat) {
    int n = mat.size();

    int i = 0, j = n - 1;

    while (i < j) {
        if (mat[i][j] == 1)
            i++;
        else
            j--;
    }

    int candidate = i;

    for (int k = 0; k < n; k++) {
        if (k == candidate) continue;

        if (mat[candidate][k] == 1 || mat[k][candidate] == 0)
            return -1;
    }

    return candidate;
}

int main() {
    int n;
    cout << "Enter number of people: ";
    cin >> n;

    vector<vector<int>> mat(n, vector<int>(n));

    cout << "Enter matrix:\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> mat[i][j];
        }
    }

    int ans = celebrity(mat);

    if (ans == -1)
        cout << "No Celebrity Found\n";
    else
        cout << "Celebrity Index = " << ans << endl;

    return 0;
}