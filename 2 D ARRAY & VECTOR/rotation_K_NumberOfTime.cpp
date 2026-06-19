#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int rotation_90Degree(vector<vector<int>> &matrix, int r, int c, int m) {
    // transpose
    for (int i = 0; i < r - 1; i++) {
        for (int j = i + 1; j < r; j++) {
            swap(matrix[i][j], matrix[j][i]); 
        }
    }
    // reverse in rows
    for (int i = 0; i < r; i++) {
        int start = 0, end = r - 1;
        while (start < end) {
            swap(matrix[i][start], matrix[i][end]);
            start++;
            end--;
        }
    }
    return 0;
}

int main() {
    int r, c;
    cout << "Enter the rows of the matrix: ";
    cin >> r;
    cout << "Enter the columns of the matrix: ";
    cin >> c;
    int k;
    cout << "Enter the number of rotations: ";
    cin >> k;
    int R = k%4;

    vector<vector<int>> matrix(r, vector<int>(c)); 

    if (r == c) {
        cout << "Enter the elements of the matrix:\n";
        for (int i = 0; i < r; i++) {
            for (int j = 0; j < c; j++) {
                cin >> matrix[i][j];
            }
        }

        cout << "Entered matrix:\n";
        for (int i = 0; i < r; i++) {
            for (int j = 0; j < c; j++) {
                cout << matrix[i][j] << " ";
            }
            cout << endl;
        } 
        while(R){
             rotation_90Degree(matrix, r, c, R);
             R--;
        }
       

        cout << "Matrix after rotation:\n";
        for (int i = 0; i < r; i++) {
            for (int j = 0; j < c; j++) {
                cout << matrix[i][j] << " ";
            }
            cout << endl;
        }
    }
    else {
        cout << "Rotation is not possible.";
    }
}
