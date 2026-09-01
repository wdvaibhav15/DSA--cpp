#include <iostream>
#include <vector>
#include <stack>
using namespace std;

class Solution {
public:
    int maxArea(vector<vector<int>> &matrix) {

        int row = matrix.size();
        int col = matrix[0].size();

        vector<int> height(col, 0);
        int ans = 0;

        for (int i = 0; i < row; i++) {

            // Build histogram
            for (int j = 0; j < col; j++) {
                if (matrix[i][j] == 0)
                    height[j] = 0;
                else
                    height[j]++;
            }

            int n = height.size();

            vector<int> left(n), right(n);
            stack<int> s;

            // Next Smaller Element on Right
            for (int j = 0; j < n; j++) {
                while (!s.empty() && height[s.top()] > height[j]) {
                    right[s.top()] = j;
                    s.pop();
                }
                s.push(j);
            }

            while (!s.empty()) {
                right[s.top()] = n;
                s.pop();
            }

            // Clear stack
            while (!s.empty())
                s.pop();

            // Next Smaller Element on Left
            for (int j = n - 1; j >= 0; j--) {
                while (!s.empty() && height[s.top()] >= height[j]) {
                    left[s.top()] = j;
                    s.pop();
                }
                s.push(j);
            }

            while (!s.empty()) {
                left[s.top()] = -1;
                s.pop();
            }

            // Calculate area
            for (int j = 0; j < n; j++) {
                int width = right[j] - left[j] - 1;
                ans = max(ans, height[j] * width);
            }
        }

        return ans;
    }
};

int main() {
    int row, col;

    cout << "Enter rows and columns: ";
    cin >> row >> col;

    vector<vector<int>> matrix(row, vector<int>(col));

    cout << "Enter matrix elements (0 or 1):\n";
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            cin >> matrix[i][j];
        }
    }

    Solution obj;
    cout << "Maximum Rectangle Area = " << obj.maxArea(matrix) << endl;

    return 0;
}