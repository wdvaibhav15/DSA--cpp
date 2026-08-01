#include <iostream>
#include <vector>
#include <string>
using namespace std;
int row[] = {-1, 1, 0, 0};
int col[] = {0, 0, -1, 1};
string direction = "UDLR";

bool valid(int i, int j, int n) {
    return (i >= 0 && i < n && j >= 0 && j < n);

}

void findPaths(vector<vector<int>>& matrix, int i, int j,  int n, vector<vector<bool>>& visited, string path, vector<string>& answer) {
    
    // Rat reached the destination
    if (i == n - 1 && j == n - 1) {
        answer.push_back(path);
        return;
    }

    visited[i][j] = true;

    //moving condition using for loop 
    for(int k = 0 ; k < 4 ; k++){
        if(valid(i + row[k], j + col[k], n) && matrix[i + row[k]][j + col[k]] == 1 && !visited[i + row[k]][j + col[k]]){
            path.push_back(direction[k]);
            findPaths(matrix, i + row[k], j + col[k], n, visited, path, answer);
        }
    }

    // Backtracking
    visited[i][j] = false;
}

int main() {
    int n;

    cout << "Enter the size of the maze: ";
    cin >> n;

    vector<vector<int>> maze(n, vector<int>(n));

    cout << "Enter the maze elements:\n";
    cout << "Use 1 for open path and 0 for blocked path:\n";

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> maze[i][j];
        }
    }

    // Starting or ending cell is blocked
    if (maze[0][0] == 0 || maze[n - 1][n - 1] == 0) {
        cout << "No path exists.\n";
        return 0;
    }

    vector<vector<bool>> visited(
        n,
        vector<bool>(n, false)
    );

    vector<string> answer;

    findPaths(maze, 0, 0, n, visited, "", answer);

    if (answer.empty()) {
        cout << "No path exists.\n";
    } else {
        cout << "Possible paths are:\n";

        for (const string& path : answer) {
            cout << path << endl;
        }
    }

    return 0;
}